// WAPC to input a 4 digit no and print the sum and product of the leftmostDigit and rightmostDigit//

#include<stdio.h>

int main()
{
	int no, leftmostdigit, rightmostdigit;
	printf("\nEnter a 4 digit no: ");
	scanf("%d" ,&no);
	leftmostdigit= no%10;
	rightmostdigit= no/1000;
	printf("\nSum of leftmostdigit and rightmostdigit : %d " , leftmostdigit+rightmostdigit);
	printf("\nProduct of leftmostdigit and rightmostdigit : %d " , leftmostdigit*rightmostdigit);
	return 0;
}
