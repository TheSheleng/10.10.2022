#include <iostream>
#include "exception.h"

using namespace std;

int main()
{
	try
	{
		int a, b;
		cout << "Enter 2 number:";
		cin >> a >> b;

		if (cin.fail()) throw xcptn::InvalidInput();
		if (b == 0) throw xcptn::DivideByZero();
		cout << (double)a / b;

	}
	catch (xcptn::Exception& ex)
	{
		cout << "Error: " << ex.what();
	}
}