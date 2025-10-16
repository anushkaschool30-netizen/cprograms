//WAPC to input a positive integer from the user. Check and print if the number is palindrome or not. Note:
// A palindrome number is a number that remains the same when its digits are reversed, for example, 121.
#include<stdio.h>

int main()
{
	int num,reverse=0,lstdgt,ognum;
	printf("enter a positive no ");
	scanf("%d",&num);
	ognum=num;
	while(num>0)
	{
		lstdgt=num%10;
		reverse= (reverse*10)+lstdgt;
		num=num/10;
	}
	if(ognum==reverse)
	printf("\nthe no is palindrome");
	else
	printf("\nthe no is not palindrome");
	return 0;
}
