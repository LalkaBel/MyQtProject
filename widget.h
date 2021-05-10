#ifndef WIDGET_H
#define WIDGET_H

#include <QObject>

class Widget : public QObject
{
    Q_OBJECT
private:
    Q_PROPERTY(qulonglong input WRITE  setInputValue
                                READ   inputValue
                                NOTIFY inputValueChanged
              )
    Q_PROPERTY(QString result READ   resultValue
                                 NOTIFY resultValueChanged
              )

    qulonglong m_nInput;
    QString m_nResult;

public:
    Widget(QObject* pobj = 0);

    Q_INVOKABLE QString factorial(const qulonglong& n);

    qulonglong inputValue   (                 ) const;
    void       setInputValue(const qulonglong&);
    QString resultValue  (                 ) const;

signals:
    void inputValueChanged (QString);
    void resultValueChanged(QString);
};
#endif // WIDGET_H
