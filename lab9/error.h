#ifndef ERROR_H
#define ERROR_H
#include <iostream>
#include <string>

using namespace std;

class Error
{
private:
    string str;

public:
    Error(string s)
    {
        str = s;
    }

    void what()
    {
        cout << str << endl;
    }

};

#endif