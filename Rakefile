#!/usr/bin/env rake
# Add your own tasks in files placed in lib/tasks ending in .rake,
# and they will automatically be available to Rake.

require File.expand_path('../config/application', __FILE__)

Bostonlocaltv::Application.load_tasks

ZIP_URL = 'https://github.com/projectblacklight/blacklight-jetty/archive/v4.9.0.zip'
require 'jettywrapper'

desc "Run Travis"
task :ci => ["dev:ci"]

Rake::Task[:default].prerequisites.clear if Rake::Task.task_defined?(:default)
task :default => [:ci]
