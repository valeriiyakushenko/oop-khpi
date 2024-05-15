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
    Error(string str)
    {
        this->str = str;
    }

    void what()
    {
        cout << str << endl;
    }

};

#endif