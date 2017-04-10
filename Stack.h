//
//  Stack.h
//  pa3
//
//  Created by Adam on 4/9/17.
//  Copyright © 2017 Adam. All rights reserved.
//

#ifndef Stack_h
#define Stack_h
#include <string>

using namespace std;

class Stack
{
	private:
		int top;
		int capacity;
		string *storage;
    public:
		Stack();
		Stack(int capacity);
		void push(string value);
		void pop();
		string peek();
		bool isEmpty();
		int getCapacity();
		/*
		Stack()
		{
			if (capacity <= 0)
				throw string("Stack's capacity must be positive");
			storage = new string[100];
			capacity = 100;
			top = -1;
		}

		Stack(int capacity)
		{
			if (capacity <= 0)
				throw string("Stack's capacity must be positive");
			storage = new string[capacity];
			this->capacity = capacity;
			top = -1;
		}

		void push(string value)
		{
			if (top == capacity)
				throw string("Stack's underlying storage is overflow");
			top++;
			storage[top] = value;

		}

		void pop()
		{
			if (top == -1)
				throw string("Stack is empty");
			top--;

		}

		string peek()
		{
			if (top == -1)
				throw string("Stack is empty");
			return storage[top];
		}

		bool isEmpty()
		{
			return(top == -1);
		}

		int getCapacity()
		{
			return capacity;
		}
		*/
   


};



#endif /* Stack_h */
