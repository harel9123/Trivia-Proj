#pragma once

#include <iostream>
#include <string>
#include <Windows.h>
#include <WinSock2.h>
#include <mutex>
#include <map>
#include <queue>

#include "User.h"
#include "Room.h"
//#include "ReceivedMessage.h" //Add after creation.

using namespace std;

class TriviaServer
{
	private:
		SOCKET _socket;
		map<SOCKET, User *> _connectedUsers;
		string _db;//string --> DataBase.
		map<int, Room *> _roomsList;

		mutex _mtxReceivedMessages;
		queue<string *> _queRcvMessages;//string --> ReceivedMessage.

		static int _roomIdSequence;

		void bindAndListen();
		void accept();
		void clientHandler(SOCKET client);
		void safeDeleteUser(string *); //string --> ReceivedMessage.

		User * handleSignin(string *);//string --> ReceivedMessage.
		bool handleSignup(string *);//string --> ReceivedMessage.
		void handleSignout(string *);//string --> ReceivedMessage.

		void handleLeaveGame(string *);//string --> ReceivedMessage.
		void handleStartGame(string *);//string --> ReceivedMessage.
		void handlePlayerAnswer(string *);//string --> ReceivedMessage.

		bool handleCreateRoom(string *);//string --> ReceivedMessage.
		bool handleCloseRoom(string *);//string --> ReceivedMessage.
		bool handleJoinRoom(string *);//string --> ReceivedMessage.
		bool handleLeaveRoom(string *);//string --> ReceivedMessage.
		void handleGetUsersInRoom(string *);//string --> ReceivedMessage.
		void handleGetRooms(string *);//string --> ReceivedMessage.

		void handleGetBestScores(string *);//string --> ReceivedMessage.
		void handleGetPersonalStatus(string *);//string --> ReceivedMessage.

		void handleReceivedMessages();
		void addReceivedMessage(string *);//string --> ReceivedMessage.
		string * buildReceiveMessage(SOCKET, int);//string --> ReceivedMessage.

		User * getUserByName(string name);
		User * getUserBySocket(SOCKET sock);
		Room * getRoomById(int id);
	public:
		TriviaServer();
		~TriviaServer();

		void server();

		
};