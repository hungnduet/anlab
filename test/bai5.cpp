#include"bai5.h"
#include<QDebug>


void bai5::nhaptt5()
{
    float x,y;
    qDebug()<<"bai toan 5:";
    bai5::nhap();
    cin>>x>>y;
    bai5::seta(x);
    bai5::setb(y);
}

void bai5::xuatkq5()
{
    qDebug()<<"s= "<<tong();
    qDebug()<<"p= "<<tich();
    qDebug()<<"ket qua: "<<total()<<endl;
}

int bai5::total()
{
    return tong()*tong()+tich()*(tong()- a)*(tich()+ b);
}
