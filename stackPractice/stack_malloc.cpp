#pragma clang diagnostic ignored "-Winvalid-source-encoding"

#pragma clang diagnostic ignored "-Winvalid-source-encoding"
#include <iostream>

using namespace std;

struct stack_malloc
{
	float* data;
	int top = -1;
	int maxSize = 3;
};


int isEmpty(stack_malloc& stack)
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


int isFull(stack_malloc& stack)
{
	if (stack.top == stack.maxSize - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


bool push(stack_malloc& stack, float pushNumber)
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

bool pop(stack_malloc& stack)
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


void printStack(stack_malloc& stack)
{
	int i;
	for (i = stack.top; i >= 0; i--)
	{
		cout << "\t" << stack.data[i] << "\n";
	}
}

int stackInitial(stack_malloc& stack, int size)
{
	stack.data = (float*)malloc(sizeof(float) * size);
	if (stack.data == NULL)return 0;

	stack.maxSize = size;
	return 1;
}

void stackMalloc()
{
	stack_malloc theStack;
	system("cls");
	cout << "�����G\n";


	while (true)
	{
		int stackSize;
		cout << "\n\t�п�JSTACK�j�p:";
		cin >> stackSize;
		if (stackInitial(theStack, stackSize) == 1)break;
	}


	int operation;
	while (true)
	{
		cout << "\n\t�п�ܾާ@:";
		cin >> operation;
		if (operation == 1)
		{
			cout << "\tpush �п�J�Ʀr:";
			float pushNumber;
			cin >> pushNumber;
			bool result = push(theStack, pushNumber);
			if (result == true)
			{
				cout << pushNumber << " has been pushed\n";
			}
			else
			{
				cout << "���e����\n";
			}
		}
		else if (operation == 2)
		{
			cout << "pop:\n";
			bool result = pop(theStack);
			if (result == false)
			{
				cout << "POP����\n";
			}
		}
		else if (operation == 3)
		{
			cout << "\nprint stack:\n";
			printStack(theStack);
		}
		else if (operation == 4)
		{
			cout << "\t���}�����G\n";
			system("pause");
			system("cls");
			break;
		}
	}
}
