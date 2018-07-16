#include"bai6.h"
#include<QDebug>


void bai6::nhaptt6()
{
    float x,y;
    bai6::nhap();
    qDebug()<<"nhap so phuc : ";
    cin>>x>>y;
    bai6::seta(x);
    bai6::setb(y);


}

void bai6::xuatkq6()
{
    qDebug()<<geta()<<"+"<<getb()<<"i";
}

bai6 bai6::operator +(const bai6 &sp2)
   {
       bai6 sum;
       sum.a = this->a + sp2.a;
       sum.b = this->b + sp2.b;
       return sum;
   }
