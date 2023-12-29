#include "sample.h"

Sample::Sample()
{

}

void Sample::SwapByte(unsigned char *ucpByte1, unsigned char *ucpByte2)
{
    unsigned char ucTempByte;
    ucTempByte = *ucpByte1;
    *ucpByte1 = *ucpByte2;
    *ucpByte2 = ucTempByte;
}

short Sample::callSwap()
{
    short int param = 2096;

    SwapByte((unsigned char *)(&(param)),
            (unsigned char *)(&(param)) + 1);

    qDebug()<<"out: "<<param;
    return param;
}
