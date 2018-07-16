#ifndef BAI3_H
#define BAI3_H
#include "bassic.h"
#include "bai1.h"

class bai3 :public bai1
{
protected:
    float c;
public:
    virtual void setc(int value);
    virtual float getc();
    float vantoc();

    void nhaptt3();
    void xuatkq3();
};
#endif // BAI3_H
