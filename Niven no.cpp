//WAPC to input a positive integer. Check whether it is Niven or not. Note: Niven number – A number divisible by the 
//sum of its digits. Example: 18 ÷ (1+8) = 2
#include<stdio.h>

int main()
{
	int num,ognum,sum=0,lstdgt;
	printf("Enter a no");
	scanf("%d",&num);
	num=ognum;
	while(num>0)
	{
		lstdgt=num%10;
		sum=sum+lstdgt;
		num=num/10;
	}
	if(ognum%sum==0)
	printf("Niven number");
	else
	printf("not Niven number");
	return 0;
}
