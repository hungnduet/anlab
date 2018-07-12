#include"set.h"
#ifndef BAI2_H
#define BAI2_H
//extern int sum;
class bai2 :public bai1
{
    public:
        float tbc();
};
////sum=tong()/2;
float bai2::tbc()
{
    return tong()/float(2);
}

#endif // BAI2_H
