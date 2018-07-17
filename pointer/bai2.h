#ifndef BAI2_H
#define BAI2_H
#include"bassic.h"


class bai2 : public bassic
{
public:
    bai2();
    ~bai2();
    void nhapb2();
    void xuatb2();
protected:
    int arr[5];
    int *x = arr;

};

#endif // BAI2_H
