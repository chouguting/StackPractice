#pragma clang diagnostic ignored "-Winvalid-source-encoding"

#pragma clang diagnostic ignored "-Winvalid-source-encoding"
#include <iostream>

using namespace std;

struct stack_linked
{
	float data;
	stack_linked* nextptr;
};


int isEmpty(stack_linked* stack)
{
	if (stack == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


bool push(stack_linked* & topPtr, float pushNumber)
{
	stack_linked* newPtr = (stack_linked*)malloc(sizeof(stack_linked));
	if (newPtr == NULL)return false;
	newPtr->data = pushNumber;
	newPtr->nextptr = topPtr;
	topPtr = newPtr;
	return true;
}

bool pop(stack_linked* & topPtr,float &poppedNumber)
{
	if (isEmpty(topPtr) == 1)
	{
		return false;
	}
	else
	{
		stack_linked* tempPtr = topPtr;
		poppedNumber= topPtr->data ;
		topPtr = topPtr->nextptr;
		free(tempPtr);
		return true;
	}
}


void printStack(stack_linked*& topPtr)
{
	stack_linked* tempPtr = topPtr;
	while (tempPtr != NULL)
	{
		cout << tempPtr->data << "\n";
		tempPtr = tempPtr->nextptr;
	}
}


void stackLinked()
{
	stack_linked* stackPtr = NULL;
	system("cls");
	cout << "版本三\n";


	int operation;
	while (true)
	{
		cout << "\n\t請選擇操作:";
		cin >> operation;
		if (operation == 1)
		{
			cout << "\tpush 請輸入數字:";
			float pushNumber;
			cin >> pushNumber;
			bool result = push(stackPtr, pushNumber);
			if (result == true)
			{
				cout << pushNumber << " has been pushed\n";
			}
			else
			{
				cout << "推送失敗\n";
			}
		}
		else if (operation == 2)
		{
			cout << "pop:\n";
			float poppedNumber;
			bool result = pop(stackPtr, poppedNumber);
			if (result == false)
			{
				cout << "POP失敗\n";
			}else
			{
				cout << poppedNumber << " has been popped\n";
			}
		}
		else if (operation == 3)
		{
			cout << "\nprint stack:\n";
			printStack(stackPtr);
		}
		else if (operation == 4)
		{
			cout << "\t離開版本三\n";
			system("pause");
			system("cls");
			break;
		}
	}
}
