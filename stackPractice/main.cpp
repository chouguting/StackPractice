#pragma clang diagnostic ignored "-Winvalid-source-encoding"
#include<iostream>
#include "stack.h"

using namespace std;


int main()
{
	int versionSelect;

	while (true)
	{
		cout << "����1 Array (�ϥ� #define �өw�q stack �j�p):"
			<< "\n����2 Array (malloc and pointer):"
			<< "\n����3 (linked list)\n\n";
		cout << "�п�ܪ���:";
		cin >> versionSelect;


		if (versionSelect == 1)
		{
			stackDefine();
		}
		else if (versionSelect == 2)
		{
			stackMalloc();
		}
		else if (versionSelect == 3)
		{
			stackLinked();
		}
		else if (versionSelect == 4)
		{
			break;
		}
	}
}
