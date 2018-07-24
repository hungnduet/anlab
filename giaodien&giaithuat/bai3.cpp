#include "bai3.h"
#include"QDebug"
#include "QWidgetSet"

Bai3::Bai3(QObject *parent)
    : QObject(parent)
{
}

//Bai3::Bai3()
//{
//}
int Bai3::fibo(int m_n)
{

    if (m_n == 0) return 0;
    else if (m_n == 1) return 1;
    else return (fibo(m_n - 1) + fibo(m_n - 2));
}

QString Bai3::infibo(int m_n)
{
    QString result = "";
    for (int i = 0; i < m_n; i++) {
        result.append(QString::number(fibo(i)));
        result.append(" ");
    }
    return result;
}

//int Bai3::n() const
//{
//    return m_n;
//}

//void Bai3::setn(int n)
//{
//    if (m_n == n)
//        return;

//    m_n = n;
//    emit nChanged(n);
//}



