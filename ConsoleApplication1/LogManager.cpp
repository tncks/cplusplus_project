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

	cout << "ID�� �Է��� �ֽʽÿ�: ";
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
		cout << "�α��ο� �����Ͽ����ϴ�." << endl
			<< "ID�� Ȯ���Ͽ� �ֽʽÿ�." << endl;
		nowLoggedIn = -1;

		return false;
	}


	cout << "�α��ο� �����Ͽ����ϴ�." << endl;

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