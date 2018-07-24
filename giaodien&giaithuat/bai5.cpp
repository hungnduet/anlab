#include "bai5.h"
#include <QDebug>

//bai5::bai5()
//{

//}

Bai5::Bai5(QObject *parent)
    : QObject(parent)
{
}


QString Bai5::inkitu(QString m_kitu)
{
     char i;
      i = m_kitu[0].toLatin1();
//      QString(QChar::fromLatin1(i+1));
      QString result = "kí tự đứng trước : ";
      result.append(QString(QChar::fromLatin1(i-1)));
      result.append(" kí tự đứng sau : ");
      result.append(QString(QChar::fromLatin1(i+1)));
      result.append(" mã Ascci: ");
      result.append(QString::number(m_kitu[0].toLatin1()));
      return result;


}

//int Bai5::maAscci(QString m_kitu)
//{


//    return m_kitu[0].toLatin1();
//}
