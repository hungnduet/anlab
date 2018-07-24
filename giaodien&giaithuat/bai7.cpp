#include "bai7.h"

//Bai7::Bai7()
//{

//}
Bai7::Bai7(QObject *parent)
    : QObject(parent)
{
}
QString Bai7::output(QString m_chuoi)
{
    QString result = "";
    for (int i=0;i<m_chuoi.length();i++)
    {
        if(m_chuoi[i] == 'A' ||m_chuoi[i] == 'E' ||m_chuoi[i] == 'I' ||m_chuoi[i] == 'O' ||m_chuoi[i] == 'U')
        {
            nguyenamh++;
        }
        else if(m_chuoi[i] == 'a' ||m_chuoi[i] == 'e' ||m_chuoi[i] == 'i' ||m_chuoi[i] == 'o' ||m_chuoi[i] == 'u')
        {
            nguyenamt++;
        }
        else if (m_chuoi[i] >='65' && m_chuoi[i] <='90')  phuamh++;
        else if (m_chuoi[i] >='97' && m_chuoi[i] <='122') phuamt++;
    }
    result.append(" nguyên âm hoa có: " );result.append(QString::number(nguyenamh));
    result.append(" số phụ âm hoa có: ");result.append(QString::number(phuamh));

    result.append(" số nguyên âm thường có: ");result.append(QString::number(nguyenamt));
    result.append(" số phụ âm thường có: ");result.append(QString::number(phuamt));
    return result;
}
