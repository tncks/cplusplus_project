#include "stdafx.h"
#include <iostream>
#include <string>

#include "Account.h"

void Account::Output(void) {
	using namespace std;
	cout << "가지고 있는 돈: " << money << endl;
	cout << "레벨: " << level << endl;
	cout << "직업: " << type << endl;

	return;
}