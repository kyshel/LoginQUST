# [LoginQUST](https://github.com/kyshel/LoginQUST)
多种姿势登录QUST-青岛科技大学校园网，不依赖浏览器，无论Window、Unix操作系统，有线无线通用！


## Usage

#### Unix & Unix-Like system

0. `ifconfig` (确保已DHCP到ip，一般为10.x.x.x)  
1.  `vim LoginQUST.sh`  
2.  输入 `curl -d "DDDDD=_&upass=_&0MKKey=123456" http://172.16.10.3` (把 _ 替换成你的 用户名、密码 后，保存退出)  
3.  `chmod u+x LoginQUST.sh`  
4.  `./LoginQUST.sh`   


#### Windows

1.更改LoginQUST.c中的 用户名和密码  
2.编译生成 LoginQUST.exe  (利用VS2015)  
3.打开LoginQUST.exe ，自动登录  

#### Android
1.下载安装 [apk](http://nic.qust.edu.cn/system/_content/download.jsp?urltype=news.DownloadAttachUrl&owner=967955788&wbfileid=253215)  
2.打开app，输入用户名密码登录

## Tips
- 登录后访问[172.16.10.3](http://172.16.10.3)查询剩余流量  
- 一个账号最多登录两个终端
- [登录原理](http://kyshel.github.io/LoginQUST/index.html?page=info)


## Credits
Made with ❤ by [kyshel](http://github.com/kyshel)  
MIT License
