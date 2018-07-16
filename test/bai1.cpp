#include"bai1.h"
#include <QDebug>

//bai1 bai_1;
float x,y;
void bai1::nhaptt1()
{
    qDebug()<<"bai toan 1:\n";
    nhap();
    //bai1::nhap();
    cin>>x>>y;
    seta(x);
    setb(y);
//    bai1::seta(x);
//    bai1::setb(y);
}

void bai1::xuatkq1()
{
    qDebug()<<"tong 2 so: "<<tong()<<endl;
    qDebug()<<"hieu 2 so: "<<hieu()<<endl;
    qDebug()<<"tich 2 so: "<<tich()<<endl;
    qDebug()<<"thuong 2 so: "<<thuong()<<endl;
}

int bai1::tong()
    {
        return a+b;
    }
int bai1::hieu()
    {
        return a-b;
    }
int bai1::tich()
    {
        return a*b;
    }
float bai1::thuong()
    {
        if(b==0)  exit(0);
        else return float(a)/b;
    }


void bai1::seta(int value)
{
    a = value;
}
float bai1::geta()
{
    return a;
}
void bai1::setb(int value)
{
    b = value;
}
float bai1::getb()
{
    return b;
}

