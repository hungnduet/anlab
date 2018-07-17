#include "bai1.h"
#include<QDebug>



bai1:: bai1()
{

}
bai1:: ~bai1()
{
    delete[] p;
}

void bai1::nhapb1()
{
    qDebug()<<"ban chon bai toan 1: ";
    input();
    qDebug()<<"nhap so phan tu cua day: "<<endl;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        qDebug()<<" nhap gia tri thu "<<i+1<<"la: ";
        cin>>p[i];
    }
}
void bai1::xuatb1()
{
    output();
    qDebug()<<"max = "<<findmax();

}
int bai1::findmax()
{
    int *max = p;
    for (int i=0;i<n;++i)
    {
        if(*max<*(max+i))   *max=*(max+i);
    }
    return *max;
}

