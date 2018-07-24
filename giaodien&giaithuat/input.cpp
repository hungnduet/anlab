#include "input.h"

Input::Input(QObject *parent):
    QObject(parent)
{

}
QString Input::input()
{
    return m_input;
}

void Input::setinput(const QString &input)
{
    if (input == m_input)
        return;

    m_input = input;

}
