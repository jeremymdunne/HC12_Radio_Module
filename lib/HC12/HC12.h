#ifndef HC12_H
#define HC12_H

#include <Arduino.h>
#include <SoftwareSerial.h>

enum hc12_baud{
  HC12_BAUD_9600,
  HC12_BAUD_115200
};

enum hc12_transmit_power{

};

enum hc12_channel{

};

class HC12{
public:
  HC12(int rx, int tx);
  HC12(int rx, int tx, hc12_baud baud);
  int available();
  char read();


private:
};


#endif
