#include "bai2.h"
#include "bassic.h"

bai2::bai2()
{

}
bai2::~bai2()
{

}

void bai2::nhapb2()
{
    qDebug()<<"ban chon bai toan 2";
    input();
    qDebug()<<"nhap 5 so: ";
     for(int i=0;i<5;i++)
     {
        std:: cin>>*(x+i);
     }
}
void bai2::xuatb2()
{
    output();
    for(int i=0;i<5;i++)
    {
        qDebug()<<arr[i]<<"\t";
    }
}

