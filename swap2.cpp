//WAPC to input two integers and display the contents after swapping.
#include<stdio.h>

int main()
{
	int num1,num2,temp;
	printf("enter 2 no:");
	scanf("%d %d",&num1,&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("after swapping num 1= %d and num2=%d",num1,num2);
	return 0;
}
