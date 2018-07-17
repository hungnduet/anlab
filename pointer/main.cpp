//#include <QCoreApplication>

#include"bai1.h"
#include"bai2.h"


int main()
{
//    QCoreApplication a(argc, argv);
      int i;
        qDebug() << "xin moi lua chon bai toan:" << endl;
        cin>>i;
        switch (i) {

        case 1:
       {
            bai1 bai_1;
            bai_1.nhapb1();
            bai_1.xuatb1();
            break;
        }

        case 2:
        {
            bai2 bai_2;
            bai_2.nhapb2();
            bai_2.xuatb2();
            break;
        }

        default: qDebug()<<"lua chon ko phu hop";
        break;
}
    return 0;
}

