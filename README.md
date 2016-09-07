# LoginQUST
LoginQUST - 多种姿势登录 QUST校园网，不依赖浏览器，不依赖操作系统，有线、无线通用
>LoginQUST give you geek ways to login QUST(Qing Dao University of Science&Technology) campus net.

## Usage

####Unix & Unix-Like system

0. `ifconfig` (确保已DHCP到ip，一般为10.x.x.x)  
1.  `vim LoginQUST.sh`  
2.  输入 `curl -d "DDDDD=_&upass=_&0MKKey=123456" http://172.16.10.3` (把 _ 替换成你的 用户名、密码 后，保存退出)  
3.  `chmod u+x LoginQUST.sh`  
4.  `./LoginQUST.sh`   


####Windows

1.更改LoginQUST.c中的 用户名和密码  
2.编译生成 LoginQUST.exe  (可使用VC6.0)  
3.打开LoginQUST.exe ，自动登录  

####Android
1.下载安装 LoginQUST.apk  
2.打开 LoginQUST ，输入用户名密码登录

# Tips
- 查剩余流量，登录后访问 [172.16.10.3](172.16.10.3)

# Credits
Author: Kyshel  
License: MIT
