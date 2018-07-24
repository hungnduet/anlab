#ifndef INPUT_H
#define INPUT_H
#include <QObject>
#include <QString>

class Input: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString input READ input WRITE setinput )
public:
    explicit Input(QObject*parent = nullptr);
    QString input();
    void setinput(const QString &input);
private:
QString m_input;
};

#endif // INPUT_H
