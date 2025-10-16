//WAPC to input a positive integer from the user. Find and display the factorial of the number.
#include<stdio.h>

int main()
{
	int i,n,factorial=1;
	printf("input a positive integer");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("the factorial of the no is %d",factorial);
	return 0;
}
