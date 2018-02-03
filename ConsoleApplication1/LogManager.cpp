#include "stdafx.h"
#include <iostream>
#include <string>

#include "LogManager.h"

void LogManager::SetServer(Server &server)
{
	this->server = server;

	return;
}

bool LogManager::LogIn(void)
{
	using namespace std;

	string input;

	cout << "ID를 입력해 주십시요: ";
	cin >> input;

	for (nowLoggedIn = 0; nowLoggedIn < server.count; nowLoggedIn++)
	{
		if (input == server.pList[nowLoggedIn].id)
		{
			break;
		}
	}

	if (nowLoggedIn == server.count)
	{
		cout << "로그인에 실패하였습니다." << endl
			<< "ID를 확인하여 주십시요." << endl;
		nowLoggedIn = -1;

		return false;
	}


	cout << "로그인에 성공하였습니다." << endl;

	return true;
}

Account *LogManager::Get(void)
{
	if (nowLoggedIn == -1)
	{
		return 0;
	}

	return &server.pList[nowLoggedIn];
}