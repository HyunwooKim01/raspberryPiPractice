#include <stdio.h>
#include <wiringPi.h> //wiringPi.h is use to GPIO connect

int main(void)
{
	if(wiringPiSetupGpio()==-1) return -1;
	
	pinMode(16, OUTPUT);
	pinMode(20, OUTPUT);
	pinMode(21, OUTPUT);
	
	while(1) {
		
		digitalWrite(16, 1);
		digitalWrite(20, 1);
		digitalWrite(21, 1);
		delay(1000);
		
		digitalWrite(16, 0);
		digitalWrite(20, 0);
		digitalWrite(21, 0);
		delay(1000);
		
	}
	
	return 0;
}

