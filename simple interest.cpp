//WAPC to find the simple interest based on user inputs
#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("input principal,rate and time");
	scanf("%d %d %d",&p,&r,&t);
	si=(p*r*t)/100;
	printf("the simple interest is %d",si);
	return 0;
}
