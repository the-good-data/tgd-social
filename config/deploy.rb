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

after "deploy:restart", "deploy:default_site_symlink"

namespace :deploy do
  
  task :rename_main_file do
    run "mv #{release_path}/protected/config/main.prod.php #{release_path}/protected/config/main.php"
    run "mv #{release_path}/protected/config/local_config.prod.php #{release_path}/protected/config/local_config.php"
  end
  
  task :default_site_symlink do
    run "ln -nfs #{shared_path}/default #{current_path}/sites/"
  end
  
end
