//WAPC to do the following:
//Input: age, citizenship status (Y/N), criminal record (Y/N).
//Eligible if: age = 18 and citizenship = Y and no criminal record.
//If age = 60, print "Senior Citizen Eligible".
//If not eligible, specify why.
#include<stdio.h>

int main()
{
	int age;
	char cs,cr;
	printf("Input: age, citizenship status (Y/N), criminal record (Y/N)");
	scanf("%d",&age);
	scanf("%c",&cs);
	scanf("%c",&cr);
	if(age>=18 && cs=='Y'&& cr=='N')
	{
		if(age>=60)
		printf("Senior Citizen Eligible");
		else
		printf("eligible");
	}
	printf("not eligible");
	return 0;
}
