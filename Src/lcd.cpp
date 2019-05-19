//
// Created by fantl on 2019/5/19.
//

#include "lcd.h"
#include <iostream>

using namespace std;

/// 成员初始化顺序只与声明的顺序有关，与下面的书写顺序无关
CLcd::CLcd(int x, int y) : x(x), y(y)
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