#include <stdint.h>
#include "unity.h"
#include "Communication.h"
#include "mock_Signal.h"

void setUp(void){}

void tearDown(void){}

void test_sendBitHigh_given_xxx_should_xxx(){
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  sendBitHigh(IO_PIN);
}

void test_sendBitLow_given_xxx_should_xxx(){
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  sendBitLow(IO_PIN);
}

// void test_readBit_given_xxx_should_xxx(){
  
// }

// void test_writeData_given_0xCD_and_address_0xDEAD_and_data_0xCA_should_sent_out_0xCDDEADC0(){
  
// }

// void test_readData_given_0xAB_and_address_0xFACE_should_sent_0xABFACE_and_turnaround_and_receive_0xBE(){
  
// }
 