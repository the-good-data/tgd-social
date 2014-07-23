default_run_options[:pty] = false
ssh_options[:config] = false
ssh_options[:forward_agent] = true
set :use_sudo, false
current_branch = `git branch`.match(/\* (\S+)\s/m)[1]

set :user, "tgd"

#set :default_user, `id -u -n`.strip

#set (:user) do 
#  answer = Capistrano::CLI.ui.ask("Set your remote user (default): #{default_user}")
#  answer.empty? ? default_user : answer
#end

set :application, "openatrium"
set :domain,      "thegooddata.org"
set :deploy_to,   "/usr/share/nginx/tgd_openatrium/"

set :repository,  "git@github.com:thegooddata/social.git"
set :scm,         :git
#
#role :web,        "main.#{domain}"                         # Your HTTP server, Apache/etc
#role :app,        "main.#{domain}"                         # This may be the same as your `Web` server
#role :db,         "main.#{domain}", :primary => true       # This is where Rails migrations will run

set  :keep_releases,  10

after "deploy:restart", "deploy:default_site_symlink"

task :production do
  ssh_options[:port] = 21950
  role :web,        "lnd-app00.#{domain}"
  role :app,        "lnd-app00.#{domain}"
  role :db,         "lnd-app00.#{domain}", :primary => true

  set :deploy_to,   "/srv/openatrium/"
  set :branch, "master"
end

task :staging do
  ssh_options[:port] = 21950
  role :web,        "lnd-app00-pre.#{domain}"
  role :app,        "lnd-app00-pre.#{domain}"
  role :db,         "lnd-app00-pre.#{domain}", :primary => true

  set :deploy_to,   "/srv/openatrium/"
  
  set (:branch) { Capistrano::CLI.ui.ask("Choose the branch to deploy (current if blank): ")}
  set :branch, current_branch if branch.empty?
end

namespace :deploy do
  
  task :default_site_symlink do
    run "ln -nfs #{shared_path}/default #{current_path}/sites/"
  end
  
end
