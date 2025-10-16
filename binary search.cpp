//WAPC to initialize the array with 10 integers of your choice. Input an integer from the user. Check and display
// whether or not the input entered by the user is present in the array or not. Use the binary search technique 
//(Hint: Make sure the array elements are sorted).
#include<stdio.h>
int main()
{
	int low,high,mid,search,flag=0;
	int arr[]={1,15,34,55,67,89,90,95,99,100};
	printf("enter the number to be searched :");
	scanf("%d",&search);
	low=0;
	high=9;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==search)
	{
		flag=1;
		break;
	}
		else
		if(arr[mid]<search)
		low= mid+1;
		else
		high= mid-1;		
	}	
	if(flag==1)
	printf("the search no %d is in index %d",search,mid);
	else
	printf("the search no is not present in the given array");
	return 0;
}
