#ifndef BAI6_H
#define BAI6_H
#include<QObject>

class Bai6: public QObject
{
    Q_OBJECT
//    Q_PROPERTY(int tem READ tem WRITE settem NOTIFY temChanged)


public:
//bai6();
    explicit Bai6(QObject *parent = 0);
    Q_INVOKABLE float convert (QString t, int m_tem);
//    Q_INVOKABLE float CtoF (int m_tem);
//     Q_INVOKABLE float FtoC (int m_tem);

//    int tem() const
//    {
//        return m_tem;
//    }

//public slots:
//    void settem(int tem)
//    {
//        if (m_tem == tem)
//            return;

//        m_tem = tem;
//        emit temChanged(tem);
//    }

//signals:
//    void temChanged(int tem);

private:
    int m_tem;
    char t;
};

#endif // BAI6_H
