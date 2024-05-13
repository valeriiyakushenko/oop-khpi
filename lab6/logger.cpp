#include "logger.h"

void Logger::addRecord(const Rectangle& rect)
{
    log << "    Time: " << getCurrentTime() << endl;
    log << "    Name: " << rect.getName() << ":" << endl;
    log << "        Width: " << rect.getWidth() << endl;
    log << "        Height: " << rect.getHeight() << endl;
}

void Logger::saveLog()
{
    ofstream file("log.txt", ios::app);
    if (file.is_open()) {
        file << "Rectangle: " << Rectangle::getObjectCount() << endl;
        file << log.str();
    }
    file.close();
}

string Logger::getCurrentTime()
{
    time_t t = time(0);
    tm* now = localtime(&t);
    char time[80];
    strftime(time, sizeof(time), "%Y.%m.%d %H:%M:%S", now);
    return time;
}

Logger* Logger::instance = 0;
