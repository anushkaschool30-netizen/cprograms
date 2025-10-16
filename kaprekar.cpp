//WAPC to input a positive integer. Check whether it is Kaprekar or not. Note: Kaprekar Number – A number whose square 
//can be split into two parts that add up to the number itself. Example: 45² = 2025 ? 20 + 25 = 45
#include<stdio.h>

int main()
{
	int num,sq,firsttwono,lasttwono,sum;
	printf("enter a no");
	scanf("%d",&num);
	sq=num*num;
	firsttwono=num/100;
	lasttwono=num%100;
	sum=firsttwono+lasttwono;
	if(sum==num)
	printf("kaprekar");
	else
	printf("not kaprekar");
	return 0;
}
