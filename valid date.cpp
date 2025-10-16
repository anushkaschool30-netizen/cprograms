//WAPC to do the following:
//Input: day, month, year.
//Month between 1 and 12.
//Correct days in month (30 vs 31 days).
//February: 28 days normally, 29 days if leap year.
//Output: "Valid date" or "Invalid date".
#include<stdio.h>
int main()
{
	int date,month,year,check;
	printf("\nenter date month and year");
	scanf("%d %d %d", &date,&month,&year);
		if (year%100==0)
	{
		
		if (year%400==0)
		check=1;
		else 
		check=0;
	}
	
		
	else 
	{
	
	
		if (year%4==0)
		check=1;
		else 
		check=0;
	
	
	}
	if(month<=12)
	{
		if(date<=31 && month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		printf("\nvalid date"); 
		else
		if(date<=30&&month==4||month==6||month==9||month==11)
		printf("\nvalid date");
		else
		if(date<=28&&month==2)
		printf("\nvalid date");
		else
		if(date==29&&month==2&&check==1)
		printf("\nvalid date");
		else 
		printf("\ninvalid date");
	}
	else
    printf("\ninvalid date");
    return 0;
}




