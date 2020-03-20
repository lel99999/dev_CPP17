Vagrant.configure("2") do |config|
  config.vm.provider "virtualbox" do |v|
    v.memory = "1024"
    v.cpus = 2
    v.customize ["modifyvm", :id, "--cpuexecutioncap", "70"]
  end
# config.trigger.after :up do |trigger|
#   run "subscription-manager register --username <username> --password <password> --auto-attach
#   trigger.name = "After-Up Trigger ..."
#   trigger.info = "Trigger Execution ..."
#   trigger.run = { path:"subscription-manager register --username <username> --password <password> --auto-attach"}
# end

  config.vm.define "CPP17Dev" do |cpp17dev|
#   cpp17dev.vm.box = "clouddood/RH7.5_baserepo"
    cpp17dev.vm.box = "bento/ubntu-19.04"
    cpp17dev.vm.hostname = "CPP17Dev"
    cpp17dev.vm.network "private_network", ip: "192.168.60.157"
    cpp17dev.vm.provision "shell", :inline => "sudo echo '192.168.60.157 CPP17Dev.local CPP17Dev' >> /etc/hosts"


##  Use Main / Update in Vagrant provision command ### $vagrant provision --provision-with shell/main/update

    # Default 
    # Main
    cpp17dev.vm.provision "main", type: "ansible" do |ansible|
#     ansible.playbook = "deploy_CPP17Config.yml"
#     ansible.playbook = "deploy_CPP17Test.yml"
      ansible.playbook = "deploy_CPP17.yml"
      ansible.inventory_path = "vagrant_hosts"
      #ansible.tags = ansible_tags
      #ansible.verbose = ansible_verbosity
      #ansible.extra_vars = ansible_extra_vars
      #ansible.limit = ansible_limit
    end
    # Update
#   cpp17dev.vm.provision "update", type: "ansible" do |ansible|
#     ansible.playbook = "deploy_PythonPatchRH7.yml"
#     ansible.inventory_path = "vagrant_hosts"
#     #ansible.tags = ansible_tags
#     #ansible.verbose = ansible_verbosity
#     #ansible.extra_vars = ansible_extra_vars
#     #ansible.limit = ansible_limit
#   end
  end
# config.trigger.before :destroy do |trigger|
#   run "rm -Rf /tmp/abc/*"
    # subscription-manager remove --all
    # subscription-manager unregister
    # subscription-manager clean
#   trigger.name = "Destroy Trigger ..."
#   trigger.info = "Destroy Trigger Execution ..."
#   trigger.run = { path: "subscription-manager remove --all"}
#   trigger.run = { path: "subscription-manager unregister"}
#   trigger.run = { path: "subscription-manager clean"}
# end
end
