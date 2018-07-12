#include"set.h"
#ifndef BAI6_H
#define BAI6_H
class bai6:public getset
{
    public:
         bai6 &operator +(bai6& );
         bai6 &operator -(bai6& );
};
 bai6 &bai6:: operator +(bai6 &sp2)
    {
        bai6 sum;
        sum.a = this->a + sp2.a;
        sum.b = this->b + sp2.b;
        return sum;
    }
#endif // BAI6_H
