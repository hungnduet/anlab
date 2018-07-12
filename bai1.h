#include"set.h"
#ifndef BAI1_H
#define BAI1_H
class bai1 : public getset
{
  public:
    int tong();
    int hieu();
    int tich();
    float thuong();
};
int bai1::tong()
    {
        return a+b;
    }
int bai1::hieu()
    {
        return a-b;
    }
int bai1::tich()
    {
        return a*b;
    }
float bai1::thuong()
    {
        return float(a)/b;
    }
#endif // BAI1_H
