#include"bai3.h"
#include<QDebug>


void bai3::nhaptt3()
{
    float v,a,t;
    qDebug()<<"bai toan 3:"<<endl;
    bai3::nhap();
    cin>>v>>a>>t;
    bai3::seta(v);
    bai3::setb(a);
    bai3::setc(t);
}

void bai3::xuatkq3()
{
     qDebug()<<"van toc sau cung: "<<vantoc()<<endl;
}

float bai3::vantoc()
    {
        return a+b*c;
    }
void bai3::setc(int value)
{
    c = value;
}
float bai3::getc()
{
    return c;
}
