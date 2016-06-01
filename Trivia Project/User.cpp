#include "User.h"

User::User(string name, SOCKET sock)
{
	_username = name;
	_sock = sock;
}

void User::send(string)
{

}

void User::clearRoom()
{

}

bool User::createRoom(int, string, int, int, int)
{

}

bool User::joinRoom(Room * room)
{

}

void User::leaveRoom()
{

}

void User::closeRoom()
{

}

bool User::leaveGame()
{

}