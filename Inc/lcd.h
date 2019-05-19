//
// Created by fantl on 2019/5/19.
//

#ifndef CPPNOTE_LCD_H
#define CPPNOTE_LCD_H


class CLcd
{
public:
    CLcd();
    ~CLcd();
    void printChar();
    void setx(int x);
    void sety(int y);

private:
    int x;
    int y;

};


#endif //CPPNOTE_LCD_H
