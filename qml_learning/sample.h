#ifndef SAMPLE_H
#define SAMPLE_H
#include <QObject>
#include <QDebug>

class Sample: public QObject
{
    Q_OBJECT

public:

    Sample();
    Q_INVOKABLE void SwapByte(unsigned char *ucpByte1, unsigned char *ucpByte2);
    Q_INVOKABLE short callSwap();

};

#endif // SAMPLE_H
