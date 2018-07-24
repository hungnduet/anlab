#include "bai6.h"

Bai6::Bai6(QObject *parent)
    : QObject(parent)
{
}


//float Bai6::CtoF(int m_tem)
//{
//    return (float)(1.8*m_tem +32);
//}

//float Bai6::FtoC(int m_tem)
//{
//    return (float)(m_tem - 32)/1.8;
//}
float Bai6::convert(QString t, int m_tem)
{
    if (t == QString("c")) return (float)(1.8*m_tem +32);
    else return (float)(m_tem - 32)/1.8;
}
