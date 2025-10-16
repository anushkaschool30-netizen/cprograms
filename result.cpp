//WAPC to input marks in three subjects. If the average marks is at least 60 or
//the marks in one or more subjects is at least 80, display the message,
//"Good result".
#include<stdio.h>
int main()
{
	unsigned int m1,m2,m3;
	float avg;
	printf("\nEnter marks of 3 subjects:");
	scanf("%d %d %d",&m1,&m2,&m3);
	avg=(m1+m2+m3)/3;
	if (avg>=60)
	printf("good result");
	else
	if (m1>=80||m2>=80||m3>=80)
	printf("good result");
	else
	printf("bad result");
	return 0;
}


