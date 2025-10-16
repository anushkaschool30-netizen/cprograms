//WAPC to check if a triangle is valid or not. If it is valid, check and print if it is isosceles, scalene or equilateral.
#include<stdio.h>
int main()
{
	int ang1,ang2,ang3,sum;
	printf("\nEnter 3 angles of a triangle");
	scanf("%d %d %d", &ang1,&ang2,&ang3);
	sum= ang1+ang2+ang3;
	if (sum==180)
	{
		if (ang1==ang2 && ang2==ang3 && ang1==ang3)
		printf("it is an equilateral triangle");
		else
		if (ang1==ang2||ang2==ang3||ang2==ang3)
		printf("it is an isosceles triangle");
		else 
		printf("it is a scalene triangle");
	}
	else
	printf("triangle is not valid");
	return 0;
}
