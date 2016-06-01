#pragma once

#include <iostream>
#include <string>
#include <Windows.h>
#include <WinSock2.h>
#include "Room.h"

using namespace std;

class Room
{ 

};

class User
{
	private:
		string _username;
		Room * _currRoom;
		string _currGame;//Game *
		SOCKET _sock;

	public:
		User(string name, SOCKET sock);
		void send(string);
		string getUsername() { return _username; };
		SOCKET getSocket() { return _sock; };
		Room * getRoom() { return _currRoom; };
		string getGame() { return _currGame; };//Game *

		void setGame(string game) { _currGame = game; };//Game *
		void clearRoom();

		bool createRoom(int, string, int, int, int);//Fill in
		bool joinRoom(Room * room);

		void leaveRoom();
		void closeRoom();
		bool leaveGame();
};