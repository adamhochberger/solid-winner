//
//  Stack.cpp
//  pa3
//
//  Created by Adam on 4/9/17.
//  Copyright © 2017 Adam. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"

Stack::Stack()
{
	storage = new string[100];
	capacity = 100;
	top = -1;
};
Stack::Stack(int capacity)
{
        if (capacity <= 0)
            throw string("Stack's capacity must be positive");
        storage = new string[capacity];
        capacity = capacity;
        top = -1;
};

void Stack::push(string value)
{
        if (top == capacity)
            throw string("Stack's underlying storage is overflow");
        top++;
        storage[top] = value;

}

void Stack::pop()
{
    if (top == -1)
        throw string("Stack is empty");
    top--;

}

string Stack::peek()
{
    if (top == -1)
        throw string("Stack is empty");
    return storage[top];
}

bool Stack::isEmpty()
{
    return(top == -1);
}

int Stack::getCapacity()
{
	return capacity;
}
