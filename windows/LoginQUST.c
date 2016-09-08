/*
 * LoginQUST.c
 * Func:登录QUST校园网
 * Author:Kyshel
 * Github: github.com/kyshel/LoginQUST
 * VS2015 编译，编译前先修改42行的账户和密码
 * 2016-09-08
 */

#include "stdafx.h"
#define _WINSOCK_DEPRECATED_NO_WARNINGS 

#include <stdio.h> 
#include <winsock2.h>
#pragma  comment(lib,"ws2_32.lib")
#include <winsock.h>
#define   winsock_version   0x0101

void   main()
{ 
	SOCKADDR_IN   saServer;
	LPHOSTENT   lphostent;
	WSADATA   wsadata;
	SOCKET   hsocket;
	int   nRet;
	

	char*   req = "POST / HTTP/1.1\r\n"
		"Host: 172.16.10.3\r\n"
		"Connection: keep-alive\r\n"
		"Content-Length: 96\r\n"
		"Cache-Control: max-age=0\r\n"
		"Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8\r\n"
		"Origin: http://172.16.10.3\r\n"
		"User-Agent: Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) \r\n"
		"Chrome/42.0.2311.152 Safari/537.36\r\n"
		"Content-Type: application/x-www-form-urlencoded\r\n"
		"Referer: http://172.16.10.3/\r\n"
		"Accept-Encoding: gzip, deflate\r\n"
		"Accept-Language: en-US,en;q=0.8,zh-CN;q=0.6,zh;q=0.4\r\n"
		"\r\n";
		"DDDDD=_&upass=_&R1=0&R2=1&para=00&0MKKey=123456";
		// 把上一行的 _ 替换成你的 账户，密码(这里要写加密后的密码,获取方法见Github)
		// Ex: "DDDDD=1601020101&upass=43298yhr9qh47qh44qhtgadf&R1=0&R2=1&para=00&0MKKey=123456"

	const   char*   host_name = "172.16.10.3";

 
	if (WSAStartup(winsock_version, &wsadata))
		printf("can't   initial   socket");
	lphostent = gethostbyname(host_name);
	if (lphostent == NULL)
		printf("lphostent   is   null");
	hsocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	saServer.sin_family = AF_INET;

	saServer.sin_port = htons(80);
	saServer.sin_addr = *((LPIN_ADDR)*lphostent->h_addr_list);
	nRet = connect(hsocket, (LPSOCKADDR)&saServer, sizeof(SOCKADDR_IN));
	if (nRet == SOCKET_ERROR)
	{
		printf("can't   connect");
		closesocket(hsocket);
		return;
	}
	else
		printf("connected   with   %s\n", host_name);
	nRet = send(hsocket, req, strlen(req), 0);
	if (nRet == SOCKET_ERROR)
	{
		printf("send()   failed");
		closesocket(hsocket);

	}
	else{
		printf("send() done, waiting response...\n");

		char   dest[1000];
		nRet = 1;
		while (nRet > 0)
		{
			nRet = recv(hsocket, (LPSTR)dest, sizeof(dest), 0);

			if (nRet > 0 && nRet < 1000)
				dest[nRet] = 0;
			else {
				dest[0] = 0;
				break;
			}

			printf("\nReceived   bytes:%d\n", nRet);
			printf("Result:\n%s", dest);
		}

		printf("********   登录成功！       **************\n");
		printf("********   按任意键继续！       **************");

		getchar();
	}

}

