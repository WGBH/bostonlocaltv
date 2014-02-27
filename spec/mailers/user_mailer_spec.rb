require "spec_helper"

describe UserMailer do
	before do
	  @user = create(:user)
    @user2 = create(:user)
  	@artifact = create(:artifact)
  end

  it "should email a user when an artifact request is digitizing" do
  	@artifact.request_digitization(@user)
  	@artifact.digitize!
  	ActionMailer::Base.deliveries.last.to.should == [@user.email]
  end

  it "should email all users associated with artifact when artifact is digitizing" do
  	@artifact.request_digitization(@user)
  	@artifact.request_digitization(@user2)
  	@artifact.digitize!
  	deliveries = ActionMailer::Base.deliveries[(ActionMailer::Base.deliveries.size - @artifact.users.count)..ActionMailer::Base.deliveries.size]
  	deliveries.collect{|d| d.to}.flatten.should == [@user.email, @user2.email]
  end

  it "should email all users when an artifact request is denied by an admin" do
    @artifact.request_digitization(@user)
    @artifact.request_digitization(@user2)
    @artifact.deny!
    deliveries = ActionMailer::Base.deliveries[(ActionMailer::Base.deliveries.size - @artifact.users.count)..ActionMailer::Base.deliveries.size]
    deliveries.collect{|d| d.to}.flatten.should == [@user.email, @user2.email]
  end
end