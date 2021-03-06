#include "Communication.h"
#include "Signal.h"

void sendBitHigh(int pinNo){
  setPinHigh(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
 }
 
void sendBitLow(int pinNo){
  setPinLow(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
}

/**
 * @brief Perform write to-read turnaround.
 * @param pinNo is the pin to do turnaround
 * @steps 1) set IO pin as input
 *        2) set CLK pin low
 *        3) set CLK pin High
 */
void readturnAroundIO(int pinNo){
  setPinToInput(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
}

/**
 * @brief Perform write to-write turnaround.
 * @param pinNo is the pin to do turnaround
 * @steps 1) set IO pin as output
 *        2) set CLK pin High
 *        3) set CLK pin Low
 */
void writeTurnAroundIO(int pinNo){
  setPinToOutput(IO_PIN);
  setPinHigh(CLK_PIN); 
  setPinLow(CLK_PIN);
}

uint32_t readBit(int pinNo){
  int data;
  setPinHigh(CLK_PIN);
  setPinLow(CLK_PIN);
  data = readPin(IO_PIN);
  
  return data;
}

void writeData(uint8_t cmd, uint16_t address, uint8_t data){
  int bit;
  writeTurnAroundIO(IO_PIN);
  bit = cmd & 1;
  if(bit==1)
    sendBitHigh(IO_PIN);
  else
    sendBitLow(IO_PIN);
  
}


uint8_t readData(uint8_t cmd, uint16_t address){
  
}

