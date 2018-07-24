#ifndef BAI2_H
#define BAI2_H

#include<QObject>



class Bai2: public QObject
{
    Q_OBJECT
//    Q_PROPERTY(int day READ day WRITE setday NOTIFY dayChanged)
public:

    explicit Bai2(QObject *parent = 0);
    Q_INVOKABLE QString output(int m_day);
     int nam(int m_day);
     int thang(int m_day);
     int ngay(int m_day);

//     int day() const
//     {
//         return m_day;
//     }
//public slots:

//    void setday(int day)
//    {
//        if (m_day == day)
//            return;

//        m_day = day;
//        emit dayChanged(day);
//    }

//signals:
//    void dayChanged(int day);
private:
    int m_day;

};

#endif // BAI2_H
