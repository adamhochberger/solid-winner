//
//  checker.cpp
//  pa3
//
//  Created by Adam on 4/9/17.
//  Copyright © 2017 Adam. All rights reserved.
//

#include <iostream>
#include "checker.h"

void checker::readFile(string fileName, Stack s)
{

    ifstream myfile (fileName);
	string lineText;
	int i = 0;
    while (getline(myfile, lineText))
    {
	   string temp;
	   istringstream record(lineText);
	   textBreakup(record.str(), s);
	   i++;
    }
    myfile.close();

}

void checker::textBreakup(string text, Stack s)
{
	bool textRemaining = true;
	string::size_type length = text.length();
	int i = 0; 

	while (textRemaining)
	{
		string temp = "";
		if (text.at(i) - 0x28 > 0)
		{
			while (text.at(i) - 0x28 > 0)
			{
				temp += text.at(i);
				i++;
				
			}
			cout << temp << endl;
			s.push(temp);
		}
		else
		{
			i++;
		}
		if (length == (unsigned)i)
		{
			textRemaining = false;
		}

	}
}




void checker::findDelimiter(string *storage, Stack s)
{
	for (int i = 0; i < s.getCapacity(); i++)
	{
		if (*(storage + i) == ";" || *(storage + i) == ",")
		{
			s.push(*(storage + i));
		}
	}
}

void checker::findKeywords(string *storage, Stack s)
{
	for (int i = 0; i < s.getCapacity(); i++)
	{
		if ((*(storage + i) == "FOR" || *(storage + i) == "BEGIN") || *(storage + i) == "END")
		{
			s.push(*(storage + 1));
		}
	}
}

void checker::findConstants(string *storage, Stack s)
{
	for (int i = 0; i < s.getCapacity(); i++)
	{
		
	}
}
