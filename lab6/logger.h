#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include "rectangle.h"
using namespace std;

class Logger 
{
private:
    static Logger* instance;
    stringstream log;

    Logger() {}

public:
    static Logger* getInstance()
    {
        if (!instance)
        {
            instance = new Logger();
        }
        return instance;
    }

    void addRecord(const Rectangle& rect);
    void saveLog();
    string getCurrentTime();
};

#endif