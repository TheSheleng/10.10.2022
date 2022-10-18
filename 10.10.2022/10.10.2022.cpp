#include <iostream>
#include "exception.h"

using namespace std;

int main()
{
	try
	{
		int a, b;
		cout << "Enter 2 number:" << endl;
		cin >> a >> b;

		if (cin.fail()) throw xcptn::InvalidInput();
		if (b == 0) throw xcptn::DivideByZero();

		cout << (double)a / b << endl;

	}
	catch (xcptn::Exception& ex)
	{
		cout << "Error: " << ex.what();
	}

	try
	{
		int size;
		cin >> size;
		if (size <= 0) throw xcptn::NullReference();

		int* arr = new int[size];

		srand(time(NULL));
		for (int i = 0; i < size; i++)
			arr[i] = rand();

		int index;
		cin >> index;

		if (cin.fail()) throw xcptn::IndexOutOfRange();
		if (index < 0 || index >= size) throw xcptn::IndexOutOfRange();

		cout << arr[index] << endl;
	}
	catch (xcptn::Exception& ex)
	{
		cout << "Error: " << ex.what() << endl;
	}
}