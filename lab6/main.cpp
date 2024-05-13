#include <iostream>
#include "rectangle.h"
#include "logger.h"
using namespace std;

int main() 
{
    Logger* logger = Logger::getInstance();
    Rectangle rect1("First Rectangle", 5.0, 3.0);
    Rectangle rect2("Second Rectangle", 10.0, 2.0);

    logger->addRecord(rect1);
    logger->addRecord(rect2);
    logger->saveLog();

    cout << "Name: " << rect1.getName() << ":" << endl;
    cout << "   Width: " << rect1.getWidth() << endl;
    cout << "   Height: " << rect1.getHeight() << endl;

    return 0;
}