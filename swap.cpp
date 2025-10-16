//WAPC to input two numbers and swap them without using a third variable.
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("\nEnter 2 no :");
	scanf("%d %d",&num1,&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("after swapping the nos are  %d and %d ", num1 ,num2);
	return 0;
}
