//WAPC to input a positive integer. Check whether the number is Sunny or not. Note: Sunny Number – A number for which 
//the next number is a perfect square. Example: 8 (since 8+1=9 which is 3²)
#include<stdio.h>
#include<math.h>
int main()
{
	int temp,num,s,m;
	printf("Enter a no");
	scanf("%d",&temp);
	num=temp+1;
	s=sqrt(num);
	m=s*s;
	if(num==m)
	printf("Sunny no");
	else
	printf("not a Sunny no");
	return 0;
}
