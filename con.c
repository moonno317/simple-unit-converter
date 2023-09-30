#include <stdio.h>awdawdawdawd

int main(void) {
	float meter, centimeter, mps, kph;
	int number;
	
	printf("1: Meter to Centimeter\n2: Meter per second to Kilometer per hour\n> ");
	scanf("%d", &number);
	
	if (number == 1) {
		printf("Enter the centimeter\n> ");
		scanf("%f", &meter);
		meter = meter * 100;
		printf("%f", meter); }
       	else if(number == 2) {
		printf("Enter the mps\n> ");
		scanf("%f", &mps);
		mps = mps * 3.6;
		printf("%f", mps); }
	return 0; }
