
#include "pch.h"
#include "Stack.hpp"
#include <iostream>

using namespace std;

int main()
{
	Stack<int> stack(100);

	cout << "Is Empty() " << stack.IsEmpty() << endl;
	cout << "Size() " << stack.Size() << endl;
	
	stack.Push(0);
	cout << "Push(0) " << endl;
	cout << "Is Empty? " << stack.IsEmpty() << endl;
	cout << "Size() " << stack.Size() << endl;
	cout << "Peek() " << stack.Peek() << endl;

	for (size_t i = 1; i <= 10; i++)
	{
		stack.Push(i);
	}
	cout << "Push 1 - 10" << endl << endl;
	cout << "Size() " << stack.Size() << endl;
	cout << "Peek() " << stack.Peek() << endl;

	stack.Pop();
	stack.Pop();
	cout << "Pop() " << endl;
	cout << "Pop() " << endl;
	cout << "Size() " << stack.Size() << endl;
	cout << "Peek() " << stack.Peek() << endl;
}


