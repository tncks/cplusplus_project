#pragma once

#include "Account.h"

struct Server {
	Account *pList;
	int count = 0;

	void AddAccount(const Account &acc);
};

