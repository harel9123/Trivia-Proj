#include "User.h"

User::User(string name, SOCKET sock)
{
	_username = name;
	_sock = sock;
}

void User::send(string message)
{

}

void User::clearRoom()
{

}

bool User::createRoom(int roomId, string roomName, int maxUsers, int questionsNo, int questionTime)
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