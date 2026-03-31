#ifndef CC1101_HANDLER_H
#define CC1101_HANDLER_H

#include <SPI.h>

void CC1101_Init();
void CC1101_Transmit(byte *data, int length);

#endif // CC1101_HANDLER_H
