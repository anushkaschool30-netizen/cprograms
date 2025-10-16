//WAPC to input the temperature in Celsius and output it in Fahrenheit.

#include<stdio.h>
int main()
{
	float celsius, fahrenheit;
	printf("\nEnter the temperature in celcius :");
	scanf("%f", &celsius);
	fahrenheit= (celsius*9/5)+32;
	printf("\nTemperature in fahrenheit is : %f", fahrenheit );
	return 0;
}
