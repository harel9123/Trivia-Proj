#include "TriviaServer.h"

void TriviaServer::bindAndListen()
{

}

void TriviaServer::accept()
{

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

string * TriviaServer::buildReceiveMessage(SOCKET, int)
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