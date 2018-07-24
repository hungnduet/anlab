#ifndef BAI7_H
#define BAI7_H
#include <QObject>

class Bai7: public QObject
{
    Q_OBJECT
public:
//    bai7();
    explicit Bai7(QObject *parent = 0);
    Q_INVOKABLE QString output(QString m_chuoi);
private:
    QString m_chuoi;
    int nguyenamh=0;
    int phuamh=0;
    int nguyenamt=0;
    int phuamt=0;
};

#endif // BAI7_H
