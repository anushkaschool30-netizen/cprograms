//WAPC to input a positive integer. Check whether the number is abundant or not. Abundant Number – A number for which 
//the sum of proper divisors is greater than the number. Example: 12 ? 1+2+3+4+6=16 > 12
#include<stdio.h>

int main()
{
	int num,i,sum=0;
	printf("Enter a no");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	if(sum>num)
	printf("Abundant Number");
	else
	printf("Not Abundant number");
	return 0;
}
