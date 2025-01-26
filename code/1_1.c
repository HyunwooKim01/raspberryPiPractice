/*
	기초작품 1_1 경광등 python -> C
*/

#include <stdio.h>
#include <wiringPi.h> 	//wiringPi.h 는 GPIO를 연결하기위해 사용 		...ex) import RPi.GPIO as GPIO
int main(void)
{
	if(wiringPiSetupGpio()==-1) return -1;	//BCM GPIO로 초기화	...ex) GPIO.setmode(GPIO.BCM)
	
	pinMode(16, OUTPUT);	//GPIO 16에 해당하는 핀(보드핀 36)을 출력으로 설정	
	pinMode(20, OUTPUT);	//GPIO 20에 해당하는 핀(보드핀 38)을 출력으로 설정
	pinMode(21, OUTPUT);	//GPIO 21에 해당하는 핀(보드핀 40)을 출력으로 설정		...ex)GPIO.setup(pinNum, GPIO.OUT)
	
	while(1) {
		
		digitalWrite(16, 1);	//GPIO 16에 HIGH(1) 출력		
		digitalWrite(20, 1);	//GPIO 20에 HIGH(1) 출력		
		digitalWrite(21, 1);	//GPIO 21에 HIGH(1) 출력		...ex)GPIO.output(pinNum, HIGH)
		delay(1000);
		
		digitalWrite(16, 0);	//GPIO 16에 LOW(0) 출력
		digitalWrite(20, 0);	//GPIO 16에 LOW(0) 출력
		digitalWrite(21, 0);	//GPIO 21에 LOW(0) 출력		...ex)GPIO.output(pinNum, LOW)
		delay(1000);
		
	}
	
	return 0;
}

