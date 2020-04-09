#pragma clang diagnostic ignored "-Winvalid-source-encoding"
#include<iostream>
#include "stack.h"

using namespace std;


int main()
{
	int versionSelect;

	while (true)
	{
		cout << "版本1 Array (使用 #define 來定義 stack 大小):"
			<< "\n版本2 Array (malloc and pointer):"
			<< "\n版本3 (linked list)\n\n";
		cout << "請選擇版本:";
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
