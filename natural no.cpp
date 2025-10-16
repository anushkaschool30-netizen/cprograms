//WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
#include<stdio.h>

int main()
{
	int n,i;
	printf("enter a no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
	}
	return 0;
}
