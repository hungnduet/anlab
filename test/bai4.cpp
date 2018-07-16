#include"bai4.h"
#include<QDebug>

void bai4::nhaptt4()
{
    float z,z1,z2;
    qDebug()<<"bai toan 4:";
    bai4::nhap();
    cin>>z>>z1>>z2;
    bai4::seta(z);
    bai4::setb(z1);
    bai4::setc(z2);
}

void bai4::xuatkq4()
{
     qDebug()<<"diem trung binh : "<<dtb()<<endl;
}

float bai4::dtb()
{
    return (a+b+c)/float(3);
}
