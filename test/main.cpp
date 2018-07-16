#include<iostream>
#include <qDebug>
#include"bassic.h"
#include"bai1.h"
#include"bai2.h"
#include"bai3.h"
#include"bai4.h"
#include"bai5.h"
#include"bai6.h"
#include"bai7.h"
using namespace std;

int main()
{
    int i;
    qDebug() << "xin moi lua chon bai toan:" << endl;
    cin>>i;
    switch (i) {

    case 1:
   {
        bai1 bai_1;
       // float x,y;


        bai_1.nhaptt1();
//        cin>>x>>y;
//        if(y==0)    return 0;
//        else
//        {
//            bai_1.seta(x);
//            bai_1.setb(y);
            bai_1.xuatkq1();
//            qDebug()<<"tong 2 so: "<<bai_1.tong()<<endl;
//            qDebug()<<"hieu 2 so: "<<bai_1.hieu()<<endl;
//            qDebug()<<"tich 2 so: "<<bai_1.tich()<<endl;
//            qDebug()<<"thuong 2 so: "<<bai_1.thuong()<<endl;

        break;
    }

    case 2:
    {
        bai2 bai_2;
//        float x,y;
        bai_2.nhaptt2();
//        cin>>x>>y;
//        bai_2.seta(x);
//        bai_2.setb(y);
        bai_2.xuatkq2();
//        qDebug()<<"tong 2 so: "<<bai_2.tong()<<endl;
//        qDebug()<<"trung binh cong 2 so: "<<bai_2.tbc()<<endl;
        break;
    }

    case 3:
    {
        bai3 bai_3;
        bai_3.nhaptt3();
        bai_3.xuat();
        bai_3.xuatkq3();
        break;
    }

    case 4:
    {
        bai4 bai_4;
        bai_4.nhaptt4();
        bai_4.xuat();
        bai_4.xuatkq4();
        break;
    }
    case 5:
    {
        bai5 bai_5;
        bai_5.nhaptt5();
        bai_5.xuat();
        bai_5.xuatkq5();
        break;
    }
    case 6:{
        bai6 sp1,sp2,sp;
        qDebug()<<"bai toan 6:";
        sp1.nhaptt6();
        sp2.nhaptt6();
        sp=sp1+sp2;
        sp.xuat();
        sp.xuatkq6();
        break;
    }

    case 7:{
        bai7 _sp;
        _sp.nhaptt7();
        ++_sp;
        _sp.xuat();
        _sp.xuatkq7();
         break;
    }

    default: return 0;
        break;
    }
    return 0;
}

