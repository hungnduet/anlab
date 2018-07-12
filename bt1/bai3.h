#ifndef BAI3_H
#define BAI3_H
#include"set.h"

class bai3 :public getset
{
    public:
        int vantoc();
};
int bai3::vantoc()
    {
        return a+b*c;
    }
#endif // BAI3_H
