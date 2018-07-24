#ifndef BAI3_H
#define BAI3_H
#include<QObject>
#include <QString>

class Bai3 :public QObject
{
    Q_OBJECT
//    Q_PROPERTY(int n READ n WRITE setn NOTIFY nChanged)
public:
    int fibo(int m_n);
    Q_INVOKABLE QString infibo(int m_n);
    //Bai3();
    explicit Bai3(QObject *parent = 0);
//    int n() const;

//public slots:
//    void setn(int n);

//signals:
//    void nChanged(int n);
private:
    int m_n;
};

#endif // BAI3_H
