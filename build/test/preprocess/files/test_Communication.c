#include "mock_Signal.h"
#include "Communication.h"
#include "unity.h"


void setUp(void){}



void tearDown(void){}



void test_sendBitHigh_given_xxx_should_xxx(){

  setPinHigh_CMockExpect(11, 4);

  setPinLow_CMockExpect(12, 5);

  setPinHigh_CMockExpect(13, 5);

  sendBitHigh(4);

}



void test_sendBitLow_given_xxx_should_xxx(){

  setPinLow_CMockExpect(18, 4);

  setPinLow_CMockExpect(19, 5);

  setPinHigh_CMockExpect(20, 5);

  sendBitLow(4);

}
