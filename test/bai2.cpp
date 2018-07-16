#include"bai2.h"
#include<QDebug>


 int x,y;
 void bai2::nhaptt2()
 {
     qDebug()<<"bai toan 2:";
     nhap();
     //bai2::nhap();
     cin>>x>>y;
     seta(x);
     setb(y);
//     bai2::seta(x);
//     bai2::setb(y);
 }

float bai2::tbc()
{
    return tong()/float(2);
}

void bai2::xuatkq2()
{
    qDebug()<<"tong 2 so: "<<tong()<<endl;
    qDebug()<<"trung binh cong 2 so: "<<tbc()<<endl;
}
