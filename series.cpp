//WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms. Here, ‘n’ is user input.
#include<stdio.h>

int main()
{
	int n,i;
	printf("enter a no:");
	scanf("%d",&n);
	for(i=1;i<=n;i=i*2)
	{
		printf("\n%d",i);
	}
	return 0;
}
