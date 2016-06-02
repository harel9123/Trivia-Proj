#pragma once
#include <winsock2.h>
#include <windows.h>
#pragma comment(lib, "ws2_32.lib")
#include <iostream>
#include <string>

using namespace std;

class Socket
{
	public:
		Socket(int port);
		~Socket();
		int socketBind();
		int socketListen(int connections);
		SOCKET socketAccept();
		int socketSend(SOCKET sockNum, string buffer);
		string socketRecv(SOCKET sockNum);
		void socketClose();
	private:
		sockaddr_in _server, _client;
		SOCKET _socket;
};