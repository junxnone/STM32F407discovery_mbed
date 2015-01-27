#include "mbed.h"
#include "Test.h"
//------------------------------------
// Hyperterminal configuration
// 9600 bauds, 8-bit data, no parity
//------------------------------------

//Serial pc(SERIAL_TX, SERIAL_RX);
 
DigitalOut myled1(LED1);
DigitalOut myled2(LED2);
DigitalOut myled5(LED5);
//DigitalOut myled6(LED6);

int main() {
  int i = 1;
 // pc.printf("Hello World !\n");
  while(1) { 
      wait(1);
     // pc.printf("This program runs since %d seconds.\n", i++);
		 //	myled = !myled;
			//myled=1;
			myled1= !myled1;
			myled2 = !myled2;
			myled5 = !myled5;
			//myled6 = !myled6;
			Test();
  }
}
 