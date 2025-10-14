//WAPC to input a positive integer. Check whether it is Automorphic or not. Note: A number whose square ends with the 
//number itself is an Automorphic number. Example: 25² = 625 (ends with 25)
#include<stdio.h>

int main()
{
	int num,sq,lasttwodigit;
	printf("enter a no");
	scanf("%d",&num);
	sq=num*num;
	lasttwodigit=sq%100;
	if(num==lasttwodigit)
	printf("Automorphic");
	else
	printf("not automorphic");
	return 0;
}
