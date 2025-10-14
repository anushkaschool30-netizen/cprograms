//WAPC to check if a number is of 3-digits and divisible by 3.
#include<stdio.h>
int main()

{
  int num;
  printf("\nEnter a 3 digit no:");
  scanf("%d",&num);
  if (num>=100 && num<=999)
  {
  	if (num%3==0)
  	printf("it is a 3 digit divisible by 3");
  	else 
  	printf("it is a 3 digit not divisible by 3");
  }	
  else 
  printf("it is not a 3 digit no");
  return 0;
}
