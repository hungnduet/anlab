#ifndef BAI4_H
#define BAI4_H
#include<QObject>
#include <QString>


class Bai4 : public QObject
{
    Q_OBJECT
//    Q_PROPERTY(QString kitu READ kitu WRITE setkitu NOTIFY kituChanged)
//    char m_kitu;

    QString m_kitu;

public:
    explicit Bai4(QObject *parent = 0);
    Q_INVOKABLE  QString output(QString m_kitu);


//QString kitu() const
//{
//    return m_kitu;
//}
//public slots:
//void setkitu(QString kitu)
//{
//    if (m_kitu == kitu)
//        return;

//    m_kitu = kitu;
//    emit kituChanged(kitu);
//}
//signals:
//void kituChanged(QString kitu);
};

#endif // BAI4_H
