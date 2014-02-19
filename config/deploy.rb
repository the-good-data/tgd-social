default_run_options[:pty] = false
ssh_options[:config] = false
ssh_options[:forward_agent] = true
set :use_sudo, false

set :user, "tgd"

#set :default_user, `id -u -n`.strip

#set (:user) do 
#  answer = Capistrano::CLI.ui.ask("Set your remote user (default): #{default_user}")
#  answer.empty? ? default_user : answer
#end

set :application, "tgd_openatrium"
set :domain,      "thegooddata.org"
set :deploy_to,   "/usr/share/nginx/tgd_openatrium/"

set :repository,  "git@github.com:thegooddata/social.git"
set :scm,         :git

role :web,        "main.#{domain}"                         # Your HTTP server, Apache/etc
role :app,        "main.#{domain}"                         # This may be the same as your `Web` server
role :db,         "main.#{domain}", :primary => true       # This is where Rails migrations will run

set  :keep_releases,  10

#before "deploy:finalize_update", "deploy:move_TGD_to_current"
#after "deploy:update_code", "deploy:rename_main_file"

namespace :deploy do
  
  task :rename_main_file do
    run "mv #{release_path}/protected/config/main.prod.php #{release_path}/protected/config/main.php"
    run "mv #{release_path}/protected/config/local_config.prod.php #{release_path}/protected/config/local_config.php"
  end
  
end
