source 'http://rubygems.org'

gem 'rails', '~> 3.2.16'
gem 'syck', platforms: [:ruby_20]

gem 'blacklight', '~>4.6.3'
gem 'blacklight_range_limit'
gem 'bootstrap-sass'
gem 'carrierwave'

# Need to pin sass to < 3.3 b/c of incompatibility with compass 0.12.
# The other options was to bump compass up to 0.13.alpha, but that was triggering more dependency issues.
# see https://github.com/chriseppstein/compass/issues/1339
gem 'sass', '~> 3.2.13'

gem 'coffee-rails'
gem 'compass'
gem 'jquery-rails', '~> 3.1.3'
gem 'jquery-ui-rails'
gem 'kaminari'
gem 'sqlite3'
gem 'progressbar', '0.21.0'
# gem 'rsolr-footnotes'
gem 'therubyracer'
gem 'uglifier'
gem 'unicode'
gem 'state_machine'
gem 'dotenv-rails', '0.8.0'
gem 'cmless', '1.0.0'
gem 'jettywrapper', '~> 1.7'

group :test do
  gem 'aruba'
  gem 'capybara'
  gem 'database_cleaner'
  gem 'factory_girl_rails', '~> 4.0'
  gem 'faker'
  gem 'launchy'
  gem 'test-unit'
end

group :development, :test do
  # gem 'debugger'
  # gem 'guard-rspec'
  gem 'meta_request'
  gem 'rails-footnotes', '>= 3.7'
  gem 'rspec-rails', '~> 2.99.0'
  gem 'net-ssh', '~> 2.7.0'
  gem 'aws-sdk', '~> 2'
  gem 'curb'
  gem 'pry'
  gem 'pry-nav'
end

gem 'rake', '11.1.0'