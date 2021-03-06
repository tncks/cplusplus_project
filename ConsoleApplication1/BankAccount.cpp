#include "stdafx.h"
#include <iostream>
#include <string>
//#include "Account.h"
#include "Server.h"
#include "LogManager.h"

using namespace std;

int main()
{

	Server server;
	LogManager manager;
	
	server.AddAccount({ "FirstID",100000,15,0 });
	server.AddAccount({ "SecondID",100000,7,1 });

	manager.SetServer(server);
	
	if (!manager.LogIn())
	{
		return 0;
	}

	manager.Get()->Output();

	return 0;
}