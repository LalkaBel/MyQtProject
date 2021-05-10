#include "widget.h"

Widget::Widget(QObject* pobj) : QObject(pobj)
                                        , m_nInput()
                                        , m_nResult("1")
{
}

// ----------------------------------------------------------------------
QString Widget::factorial(const qulonglong& n)
{
    return (n==2) ? "yes" : "no";

}

// ----------------------------------------------------------------------
qulonglong Widget::inputValue() const
{
    return m_nInput;
}

// ----------------------------------------------------------------------
QString Widget::resultValue() const
{
    return m_nResult;
}

// ----------------------------------------------------------------------
void Widget::setInputValue(const qulonglong& n)
{
    m_nInput  = n;
    m_nResult = factorial(m_nInput);


}


