
sudo adduser hw
sudo usermod -aG sudo hw
sudo ufw app list
sudo ufw allow OpenSSH
sudo ufw enable
sudo ufw status

sudo rsync --archive --chown=hw:hw ~/.ssh /home/hw
sudo apt update 
sudo apt install apache2
sudo ufw app info "Apache Full"
sudo ufw allow in "Apache Full"
access http://18.237.96.180/
sudo apt install curl
curl http://icanhazip.com
sudo apt install mysql-server
alter user 'root'@'localhost' identified with mysql_native_password by 'Zhende9411314.';
flush privileges;
sudo apt install php libapache2-mod-php php-mysql
sudo nano /etc/apache2/mods-enabled/dir.conf
sudo systemctl restart apache2
sudo systemctl status apache2
sudo apt search php- | less
sudo apt show package_name
sudo apt install php-cli