//WAPC to display the sum of the first ‘n’ 
//odd numbers and the sum of the first ‘n’ even numbers separately. Here, ‘n’ is the user input.
#include<stdio.h>

int main()
{
	int n,i,oddsum=0,evensum=0;
	printf("enter a no");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		oddsum+=i;
		
	}
	for(i=2;i<=n;i+=2)
	{
		evensum+=i;
		
	}
	printf("\nodd sum %d",oddsum);
	printf("\neven sum %d",evensum);
	return 0;
}
