#include "bai2.h"
//day::bai2()
//{

//}

Bai2::Bai2(QObject *parent)
    : QObject(parent)
{
}


int Bai2::nam(int m_day)
{
    return m_day/365;

}
int Bai2::thang(int m_day)
{
    return (m_day%365)/30;
}
int Bai2::ngay(int m_day)
{
    return (m_day%365)%30;
}
QString Bai2::output(int m_day)
{
    QString result ="";
    result.append(QString::number(nam(m_day)));
    result.append(" nam ");
    result.append(QString::number(thang(m_day)));
    result.append(" thang ");
    result.append(QString::number(ngay(m_day)));
    result.append(" ngay ");
    return result;
}
