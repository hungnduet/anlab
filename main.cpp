#include <qDebug>
#include"set.h"
#include"bai1.h"
#include"bai2.h"
#include"bai3.h"
#include"bai4.h"
#include"bai5.h"
#include"bai6.h"
#include"bai7.h"

int main()
{
    int i;
    qDebug() << "xin moi lua chon bai toan:" << endl;
    cin>>i;
    bai1 bai1;
    switch (i) {
    case 1:
 //       bai1 bai1;
        qDebug()<<"bai toan 1:\n";
 //       int x,y;
        qDebug()<<"nhap x,y:";
        bai1.set2();
        qDebug()<<"tong 2 so: "<<bai1.tong()<<endl;
        qDebug()<<"hieu 2 so: "<<bai1.hieu()<<endl;
        qDebug()<<"tich 2 so: "<<bai1.tich()<<endl;
        qDebug()<<"thuong 2 so: "<<bai1.thuong()<<endl;
        break;
    case 2:
        bai2 bai2;
        qDebug()<<"bai toan 2:";
  //      int x2,y2;
        qDebug()<<"nhap x,y:";
        bai2.set2();
        qDebug()<<"tong 2 so: "<<bai2.tong()<<endl;
        qDebug()<<"trung binh cong 2 so: "<<bai2.tbc()<<endl;
        break;
    case 3:
        bai3 bai3;
        qDebug()<<"bai toan 3:"<<endl;
  //      int v0,a,t;
        qDebug()<<"nhap v0,a,t:";
        bai3.set3();
        qDebug()<<"van toc sau cung: "<<bai3.vantoc()<<endl;
        break;
    case 4:
        bai4 bai4;
        qDebug()<<"bai toan 4:";
    //    int z;
        qDebug()<<"nhap so diem kiem tra, diem giua ky, diem cuoi ky lan luot: "<<endl;
   //     cin>>x>>y>>z;
        bai4.set3();
        qDebug()<<"diem trung binh : "<<bai4.dtb()<<endl;
        break;
     case 5:
        bai5 bai5;
        qDebug()<<"bai toan 5:";
        qDebug()<<"nhap x,y: ";
        bai5.set2();
        qDebug()<<"s= "<<bai5.tong()<<endl;
        qDebug()<<"p= "<<bai5.tich()<<endl;
        qDebug()<<"ket qua: "<<bai5.total()<<endl;
          break;
     case 6:
        bai6 sp1,sp2,sp;
        qDebug()<<"bai toan 6:";
        qDebug()<<"nhap so phuc 1: "<<endl;
        sp1.set2();
        qDebug()<<"nhap so phuc 2: "<<endl;
        sp2.set2();
        sp=sp1+sp2;
        sp.getsp();
        qDebug()<<endl;
        break;
    case 7:
        bai7 _sp;
        qDebug()<<"bai toan 7:";
        qDebug()<<"nhap so phuc : "<<endl;
        _sp.set2();
   //     _sp.getsp();
        ++_sp;
        qDebug()<<"so phuc sau khi tang:"<<endl;
        _sp.getsp();
        cout<<endl;
        break;
    default:return 0;
        break;
    }
    return 0;
}
