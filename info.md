#登录原理
1.连接上校园网后，当在浏览器打开网页时，网址会被重定向到172.16.10.3  
2.重定向后的页面就是一个表单，表单的目的就是向登录服务器post数据  
3.用wireshark抓包来获取post的账号、密码数据，这里获取的密码是经过加密的字符串  
4.想办法向172.16.10.3post账号密码就可以  

### Unix & Unix-Like
类Unix系统post数据很简单，一句命令即可：  
`curl -d "post的数据" 网址`  
但是每次都输入不方便，所以高级一点的做法是，保存为shell脚本(这里假设为`lq`)，添加执行权限(`chmod u+x lq`)，运行(`./lq`)即可。  
更高级一点，把脚本放在PATH目录之一，无论当前目录在哪，直接输入`lq`即可上网  

### Windows
这里采用的是比较原生的方法，利用c语言写一个post数据的exe程序，放桌面上，双击exe程序即可上网，不用输入用户名密码

### Android
安卓也很简单，写个apk就可以。

# License
Made with ❤ by [kyshel](http://github.com/kyshel)  
MIT License
