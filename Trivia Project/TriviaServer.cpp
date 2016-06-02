#include "TriviaServer.h"

void TriviaServer::bindAndListen() throw()
{
	_socket = new Socket(8820);
	int result;
	result = _socket->socketBind();
	if (result == SOCKET_ERROR)
	{
		exception * e = new exception("Binding the socket has failed !");
		delete _socket;
		throw(e);
	}
	result = _socket->socketListen(1);
	if (result == SOCKET_ERROR)
	{
		exception * e = new exception("Listening to the socket has failed !");
		delete _socket;
		throw(e);
	}
}

void TriviaServer::accept()
{
	SOCKET soc = _socket->socketAccept();
	if (soc == SOCKET_ERROR)
	{
		exception * e = new exception("Accepting connection has failed !");
		delete _socket;
		throw(e);
	}
	//Add the user to _connectedUsers
}

void TriviaServer::clientHandler(SOCKET client)
{

}

void TriviaServer::safeDeleteUser(string *)
{

}

User * TriviaServer::handleSignin(string *)
{

}

bool TriviaServer::handleSignup(string *)
{

}

void TriviaServer::handleSignout(string *)
{

}

void TriviaServer::handleLeaveGame(string *)
{

}

void TriviaServer::handleStartGame(string *)
{

}

void TriviaServer::handlePlayerAnswer(string *)
{

}

bool TriviaServer::handleCreateRoom(string *)
{

}

bool TriviaServer::handleCloseRoom(string *)
{

}

bool TriviaServer::handleJoinRoom(string *)
{

}

bool TriviaServer::handleLeaveRoom(string *)
{

}

void TriviaServer::handleGetUsersInRoom(string *)
{

}

void TriviaServer::handleGetRooms(string *)
{

}

void TriviaServer::handleGetBestScores(string *)
{

}

void TriviaServer::handleGetPersonalStatus(string *)
{

}

void TriviaServer::handleReceivedMessages()
{

}

void TriviaServer::addReceivedMessage(string *)
{

}

string * TriviaServer::buildReceiveMessage(SOCKET client_sock, int msgCode)
{

}

User * TriviaServer::getUserByName(string name)
{

}

User * TriviaServer::getUserBySocket(SOCKET sock)
{

}

Room * TriviaServer::getRoomById(int id)
{

}