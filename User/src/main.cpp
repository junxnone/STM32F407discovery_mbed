#include "mbed.h"
#include "Test.h"

 
DigitalOut myled1(LED1);


int main() {
	
  while(1) { 
      wait(1);
   		myled1= !myled1;
			Test();
  }
}

