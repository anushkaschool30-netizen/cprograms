//WAPC to input the number of units of electricity consumed by a consumer. Calculate and print the electricity bill based on the following criteria:
//First 100 units: Rs. 2 per unit
//Next 200 units: Rs. 3 per unit
//Above 300 units: Rs. 4 per unit
//A surcharge of 2.5% is levied on the bill if the number of units consumed exceeds 300 units.
#include<stdio.h>
int main()
{
	float units, bill, surcharge , finalbill;
	printf("\nthe number of units of electricity consumed : ");
	scanf("%f",&units);
	if (units<=100 )
{
	finalbill=units*2;
}
	else
{ 
	if(units>100 && units<=300)
	finalbill=100*2 + (units-100)*3;
	else
	bill=100*2 + 200*3 + (units-300)*4;
	surcharge= bill*(2.5/100);
	finalbill= bill+surcharge;
}
    printf("\nthe total bill for %.2f is ",finalbill);
	return 0;
}
