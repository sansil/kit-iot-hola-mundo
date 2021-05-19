#include "mbed.h"

Serial pc(USBTX, USBRX, 115200); // tx, rx

DigitalOut led1(PB_13);

int main()
{
  led1 = 1;
  pc.printf("Hola mundo desde el kit-iot!\n\n");
}