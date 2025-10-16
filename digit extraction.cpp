//WAPC to input a positive integer from the user. Find and display the number of digits in the number, sum of the digits of 
//the number and product of the digits of the number.
#include<stdio.h>

int main()
{
	int num,rem,sum=0,pro=1,count=0;
	printf("enter a positive integer :");
	scanf("%d",&num);
	if (num == 0)
{
	sum=0;
	pro=0;
	count=1; 
}else
	{
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		pro=pro*rem;
		count++;
		num=num/10;
	}
}
	printf("The number of digits is: %d\n", count);
    printf("The sum of the digits is: %d\n", sum);
    printf("The product of the digits is: %d\n", pro);
	return 0;
}
