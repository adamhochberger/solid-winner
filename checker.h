//
//  main.h
//  pa3
//
//  Created by Adam on 4/9/17.
//  Copyright © 2017 Adam. All rights reserved.
//

#ifndef checker_h
#define checker_h

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Stack.h"


using namespace std;

class checker
{
    public:
        void  readFile(string fileName, Stack s);
		void  textBreakup(string text, Stack s);
        void  findDelimiter(string * storage, Stack s);
        void  findKeywords(string *storage, Stack s);
        void  findConstants(string *storage, Stack s);
        void  findIdentifiers(string *storage, Stack s);
        void  findOperators(string *storage, Stack s);

    private:
        string fileName;
};







#endif /* main_h */
