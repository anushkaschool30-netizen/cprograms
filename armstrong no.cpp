//WAPC to input a positive integer. Assume that the number is of 3 digits. Check and print if the number is Armstrong 
//or not. Note: An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of 
//the number of digits, for example, 153 = 1³ + 5³ + 3³.
#include<stdio.h>

int main()
{
	int num,lstdgt,check=0,ognum;
	printf("enter a 3digit no");
	scanf("%d",&num);
	num=ognum;
	while(num>0)
	{
		lstdgt=num%10;
		check= check+ (lstdgt*lstdgt*lstdgt);
		num=num/10;
	}
	if(ognum==check)
	printf("the no is an armstrong no");
	else
	printf("the no is not an armstrong no");
	return 0;
}
