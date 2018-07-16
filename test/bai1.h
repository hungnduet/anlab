#include"bassic.h"
#ifndef BAI1_H
#define BAI1_H





class bai1 : public Bassic
{
protected:
    int a;
    int b;
//public:
//  bai1 bai_1();
public:
    int tong();
    int hieu();
    int tich();
    float thuong();

//    virtual void nhap();
//    virtual void xuat();

    void xuatkq1();
    void nhaptt1();

    virtual void seta(int value);
    virtual float geta();

    virtual void setb(int value);
    virtual float getb();

};

#endif // BAI1_H
