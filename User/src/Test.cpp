/**
* @file Test.cpp
* @brief ≤‚ ‘”√¿˝
*
*
*
*/
#include "mbed.h"
#include "Test.h"


#if PWMOUT_TEST
PwmOut led(PWM_OUT);
#endif
#if SERIAL_TEST
RawSerial pc(UART6_TX, UART6_RX);
#endif
#if ANIN_TEST
AnalogIn AdcIn1(AN12_IN0);
#endif
#if DOUT_TEST
DigitalOut myled2(LED2);
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
		HisTest();	
}
/**
*	@brief “—æ≠≤‚ ‘π˝µƒπ¶ƒ‹
*
*/
void HisTest()
{
		#if ANIN_TEST
		AnalogInTest();
		#endif
		#if PWMOUT_TEST
		PWMOutTest();
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
* @brief PWMOUT ≤‚ ‘
* 
*/
#if PWMOUT_TEST
void PWMOutTest()
{
 	led = (float)(led + 0.1);
	wait(0.2);
	if(led == (float)1.0) {
		led = 0;
	}
}
#endif
/**
* @brief Serial ≤‚ ‘
* 
*/
#if SERIAL_TEST
void SerialTest()
{
		static int i=0;
		i++;
		pc.printf("Hello World !Cnt=%d\n",i);
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
	pc.printf("ADC now detect: (%f)\r\n", AdcIn1.read());
	pc.printf("ADC IS : %d\r\n",AdcIn1.read_u16());
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
