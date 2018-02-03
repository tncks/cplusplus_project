#pragma once

#include "Account.h"
#include "Server.h"

struct LogManager
{
	int nowLoggedIn = 0;
	Server server;

	void SetServer(Server &server);

	bool LogIn(void);

	Account *Get(void);
};