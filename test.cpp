#include <iostream>
#include "Stack.cpp"
#include "checker.cpp"

using namespace std;

int main()
{
	Stack s = Stack();
	checker c;
	string filename;

	cout << "What is the file name?";
	cin >> filename;
	c.readFile(filename, s);
}


