//
// Created by fantl on 2019/5/19.
//

#include "lcd.h"
#include <iostream>

using namespace std;

CLcd::CLcd()
{
    x = 0;
    y = 0;
}

CLcd::~CLcd()
{

}


void CLcd::printChar()
{
    cout << "x: " << x << ", y: " << y << endl;
}

void CLcd::setx(int x)
{
    CLcd::x = x;
}

void CLcd::sety(int y)
{
    CLcd::y = y;
}