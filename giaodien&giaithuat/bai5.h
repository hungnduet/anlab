#ifndef BAI5_H
#define BAI5_H
#include<QObject>

class Bai5 : public QObject
{
    Q_OBJECT
//    Q_PROPERTY(QString kitu READ kitu WRITE setkitu NOTIFY kituChanged)


public:
//    bai5();
    explicit Bai5 (QObject *parent = 0);

    Q_INVOKABLE QString inkitu(QString m_kitu);

//    Q_INVOKABLE int maAscci(QString m_kitu);
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
//    void kituChanged(QString kitu);
private:
    QString m_kitu;
};

#endif // BAI5_H
