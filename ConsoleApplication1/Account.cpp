#include "stdafx.h"
#include <iostream>
#include <string>

#include "Account.h"

void Account::Output(void) {
	using namespace std;
	cout << "������ �ִ� ��: " << money << endl;
	cout << "����: " << level << endl;
	cout << "����: " << type << endl;

	return;
}