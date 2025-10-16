//WAPC to input a positive integer. Check and print if the number is perfect or not. Note: Perfect number is a number 
//which is equal to the sum of all its proper divisors (excluding itself). Example: 28 = 1 + 2 + 4 + 7 + 14
#include<stdio.h>

int main()
{
	int num,i,sum=0;
	printf("enter a no");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(num==sum)
	printf("perfect no");
	else
	printf("not a perfect no");
	return 0;
}
