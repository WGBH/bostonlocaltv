class ApplicationController < ActionController::Base
  # Adds a few additional behaviors into the application controller 
  include Blacklight::Controller
  # Please be sure to impelement current_user and user_session. Blacklight depends on 
  # these methods in order to perform user specific actions. 
  
  layout 'old_layout'
  
  protect_from_forgery

  def default_html_head
  end

  def authenticate_admin_user!
    authenticate_user!
    unless current_user.admin?
      flash[:alert] = "Unauthorized Access!"
      redirect_to root_path
    end
  end

  protected

  # Overrides Blacklight::Controller#layout_name
  def layout_name
    'old_layout'
  end
end
