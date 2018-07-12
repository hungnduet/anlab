#ifndef BAI5_H
#define BAI5_H
#include"bai1.h"
#include"set.h"
class bai5:public bai1
{
    public:
        float total();
};

float bai5::total()
{
    return tong()*tong()+tich()*(tong()-a)*(tich()+b);
}

#endif // BAI5_H
