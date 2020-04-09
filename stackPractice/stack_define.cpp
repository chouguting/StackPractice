#pragma clang diagnostic ignored "-Winvalid-source-encoding"
#include <iostream>
#define STACK_SIZE 3
using namespace std;

struct stack_define
{
	float data[STACK_SIZE];
	int top;
};


int isEmpty(stack_define& stack)
{
	if (stack.top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int isFull(stack_define& stack)
{
	if (stack.top == STACK_SIZE - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


bool push(stack_define& stack, float pushNumber)
{
	if (isFull(stack) == 1)
	{
		return false;
	}
	else
	{
		stack.data[++stack.top] = pushNumber;
		return true;
	}
}

bool pop(stack_define& stack)
{
	if (isEmpty(stack) == 1)
	{
		return false;
	}
	else
	{
		cout << stack.data[stack.top--] << " has been popped\n";
		return true;
	}
}


void printStack(stack_define& stack)
{
	int i;
	for (i = stack.top; i >= 0; i--)
	{
		cout << "\t" << stack.data[i] << "\n";
	}
}


void stackDefine()
{
	stack_define theStack;
	system("cls");
	cout << "版本一\n";
	theStack.top = -1;
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
			bool result = push(theStack, pushNumber);
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
			bool result = pop(theStack);
			if (result == false)
			{
				cout << "POP失敗\n";
			}
		}
		else if (operation == 3)
		{
			cout << "\nprint stack:\n";
			printStack(theStack);
		}
		else if (operation == 4)
		{
			cout << "\t離開版本一\n";
			system("pause");
			system("cls");
			break;
		}
	}
}
