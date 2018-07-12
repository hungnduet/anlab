#include"set.h"
#ifndef BAI4_H
#define BAI4_H
class bai4:public bai1
{
    public:
        float dtb();
};
float bai4::dtb()
{
    return (a+b+c)/float(3);
}

#endif // BAI4_H
