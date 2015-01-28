/**
* @file Test.cpp
* @brief ≤‚ ‘”√¿˝
*
*
*
*/
#include "mbed.h"
#include "Test.h"


#if SERIAL_TEST
Serial pc(SERIAL_TX, SERIAL_RX);
#endif
#if ANIN_TEST
AnalogIn AdcIn1(AN12_IN8);
AnalogIn AdcIn2(AN12_IN9);
#endif
#if DOUT_TEST
DigitalOut myled2(LED2);
DigitalOut myled5(LED5);
#endif
#if DIN_TEST
 DigitalOut myled6(LED6);
 DigitalIn enable(USER_BUTTON);
#endif
#if ANOUT_TEST
 AnalogOut AOut1(AN_OUT1);
 AnalogOut AOut2(AN_OUT2);
#endif	
void Test()
{		
	

	
		#if SERIAL_TEST
		SerialTest();
		#endif
		#if ANIN_TEST
		AnalogInTest();
		#endif
		#if DOUT_TEST
		DigitalOutTest();
		#endif
		#if DIN_TEST
		DigitalInTest();
		#endif
		#if ANOUT_TEST
		AnalogOutTest();
		#endif
}


/**
* @brief Serial ≤‚ ‘
* 
*/
#if SERIAL_TEST
void SerialTest()
{
		pc.printf("Hello World !\n");
}
#endif	
/**
* @brief DigitalOut ≤‚ ‘
* 
*/
#if DOUT_TEST
void DigitalOutTest()
{
	myled2= !myled2;
	myled5= !myled5;
}
#endif
/**
* @brief DigitalIn ≤‚ ‘
* 
*/
#if DIN_TEST
void DigitalInTest()
{
	if(enable) {
			myled6=!myled6;
		}
}
#endif
/**
* @brief AnalogIn ≤‚ ‘
* 
*/
#if ANIN_TEST
void AnalogInTest()
{

	if(AdcIn1 > 0.5) {
// 		printf("Too hot! (%f)", temperature.read());
		}

}
#endif
/**
* @brief AnalogOut ≤‚ ‘
* 
*/
#if ANOUT_TEST
void AnalogOutTest()
{
		if(AOut1==1){
			AOut1=0;
		}
		AOut1=AOut1+(float)0.01;
		
		if(AOut2==0){
			AOut2=1;
		}
		AOut2=AOut2-(float)0.01;
}
#endif
