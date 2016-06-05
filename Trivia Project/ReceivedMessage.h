#pragma once

#include <iostream>
#include "Socket.h"
#include "User.h"

class ReceivedMessage
{
	private:
		Socket _sock;
		User * _user;
		int _messageCode;
		vector<string> _values;

	public:
		ReceivedMessage(SOCKET, int);
		ReceivedMessage(SOCKET, int, vector<string>);

		SOCKET getSock() { return _sock.getSocket(); };
		User * getUser() { return _user; };
		void setUser(User * user) { _user = user; };
		int getMessageCode(){ return _messageCode; };
		vector<string>& getValues(){ return _values; };
};