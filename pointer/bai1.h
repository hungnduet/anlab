#include"bassic.h"
#ifndef BAI1_H
#define BAI1_H


class bai1:public bassic
{
protected:
    int n;
    int *p=new int [n];
public:
    bai1();
    ~bai1();
   void nhapb1();
   void xuatb1();
   int findmax();

};

#endif // BAI1_H
