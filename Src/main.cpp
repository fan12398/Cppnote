//
// Created by fantl on 2019/5/19.
//

#include "lcd.h"
#include <iostream>

using namespace std;

int main()
{
    CLcd lcd;
    lcd.setx(1);
    lcd.sety(2);
    lcd.printChar();
    return 0;
}