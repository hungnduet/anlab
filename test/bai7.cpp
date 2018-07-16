#include"bai7.h"
#include<QDebug>


void bai7::nhaptt7()
{
    float x,y;
    qDebug()<<"bai toan 7:";
    bai7::nhap();
    cin>>x>>y;
    bai7::seta(x);
    bai7::setb(y);

}

void bai7::xuatkq7()
{
    qDebug()<<"so phuc sau khi tang:"<<endl;
    qDebug()<<geta()<<"+"<<getb()<<"i";
}

bai7 bai7:: operator ++()
   {
       ++a;
       ++b;
       return *this;
   }
