/* C++ Coded By HasanAtilan */
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h> 
#define versiyon "v1"
#define kodlayan "Hasan Atilan"
/* Renklerim */
#define yesil  "\x1b[92m"
#define kirmizi "\033[0;31m"
#define mavi "\033[0;36m"
#define sari  "\x1B[33m"

int main(){
	baslatbakalim();
	return 0;
}

baslatbakalim(){
  system("clear");
	printf("%s• • • • • • • • • • • • • • • • • • • • • • • • • • • • • •\n",BGRN);
	printf("%s• •        C++ İle Gelistirdigim Nodejs ve WebServer • •\n",sari,mavi,kirmizi,scriptversion,yesil,kirmizi,coded,yesil,kirmizi,sari);
	printf("%s• •        Otomatik Kurulum Sistemi • •\n",sari,mavi,kirmizi,scriptversion,yesil,kirmizi,coded,yesil,kirmizi,sari);
	printf("%s• •        Kodlama: HasanAtilan.com Aittir • •\n",sari,mavi,kirmizi,scriptversion,yesil,kirmizi,coded,yesil,kirmizi,sari);
	printf("%s• • • • • • • • • • • • • • • • • • • • • • • • • • • • • •\n",sari);
  printf("%s• •       %s1) %s WebServer & NODEJS Otomatik Kur        %s• •\n",kirmizi,sari,kirmizi,sari);
  printf("%s• • • • • • • • • • • • • • • • • • • • • • • • • • • • • •\n",kirmizi);
  int sectir;
  printf("%sCevap: %s",mavi,kirmizi);
  scanf("%d",&sectir);
  if(sectir==1){
  kurulumyapalim();
  } else { 
	system("clear");
	hatalisectiniz();
	}
  }

kurulumyapalim(){
system("sleep 1");
system("clear");
system("yum -y upgrade");
system("curl -O http://vestacp.com/pub/vst-install.sh");
system("bash vst-install.sh --nginx no --apache yes --phpfpm no --named yes --remi yes --vsftpd no --proftpd yes --iptables yes --fail2ban yes --quota no --exim no --dovecot no --spamassassin no --clamav no --softaculous no --mysql yes --postgresql no --hostname $1 --email $2 --password $3");
system("yum -y update");
system("yum install yum-utils");
system("yum-config-manager --enable remi-php72");
system("yum update");
system("service httpd restart");
system("yum install memcached");
system("memcached -d -m 512 -l 127.0.0.1 -p 11211 -u nobody");
system("ps -eaf | grep memcached");
system("yum install php-memcache");
system("yum install -y gcc-c++ make");
system("curl -sL https://rpm.nodesource.com/setup_8.x | sudo -E bash -");
system("sudo yum install nodejs");
system("sudo npm i -g npm");
system("sudo npm i -g forever");
system("sudo npm audit fix");
system("chmod 777 /tmp");
system("chmod 777 /var/lib/php/session");
system("chown -R admin:admin /var/lib/php/session/");
system("chown -R admin:admin /var/lib/php/opcache/");
system("chown -R admin:admin /var/lib/php/wsdlcache/");
system("chown -R admin:admin /tmp");
system("service httpd restart");
printf("Tüm Servisler Basari İle Kuruldu Coded By HasanAtilan",yesil,sari);
}

hatalisectiniz(){
  printf("%s• • • • • • • • • • • • • • • • • • • • • • • • • • • • • •\n",kirmizi);
	printf("%s• •                                                     • •\n",mavi);
	printf("%s• •                 %sYanlış tuşlama                      %s• •\n",mavi,sari,mavi);
	printf("%s• •                 %sScript Kapatiliyor                  %s• •\n",mavi,yesil,mavi);
	printf("%s• •                                                     • •\n",sari);
	printf("%s• • • • • • • • • • • • • • • • • • • • • • • • • • • • • •",yesil);
	printf("%s \n",normal);
	exit(-1);
}
