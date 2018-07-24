#include "bai4.h"

Bai4::Bai4(QObject *parent)
    : QObject(parent)
{
}

QString Bai4::output(QString m_kitu)
{
    QString result = "";

     if((m_kitu >= "A")&&(m_kitu <= "Z")||(m_kitu >= "a" && (m_kitu <= "z")))
     {
        return "kí tự vừa nhập là chữ cái";
     }
     else if ((m_kitu >= "0")&&(m_kitu <= "9"))
     {
         return "kí tự vừa nhập là chữ số";
     }
     else
     {
         return " kí tự vừa nhập là biểu tượng";
     }

     return result;
}
