#include "stdafx.h"
#include <string>
#include "Server.h"

void Server::AddAccount(const Account &acc)
{
	Account *pTemp = 0;

	pTemp = new Account[count + 1];

	for (int n = 0; n < count; n++)
	{
		pTemp[n] = pList[n];
	}

	pTemp[count] = acc;

	if (count != 0)
	{
		delete[] pList;
	}

	pList = pTemp;
	count += 1;

	return;
}