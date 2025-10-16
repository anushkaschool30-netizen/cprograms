//WAPC to input an array of ‘n’ elements from the user. Find and display the second highest element of the array.
#include <stdio.h>

int main()
{
    int i, n, maximum,secondmax;
    printf("\nEnter the total number of elements to be stored in the array: ");
    scanf("%d",&n);
    int arr[n];
    
    for(i = 0; i < n; ++i)
    {
        printf("\nEnter an integer: ");
        scanf("%d",&arr[i]);
    }
    
    maximum = arr[0];   
    for(i = 0; i < n; ++i)
    {
        if(arr[i] > maximum)
        {
            secondmax=maximum;
            maximum=arr[i];
        }
    }
    
    printf("\nThe 2nd maximum element in the array is %d",secondmax);
    
    return 0;
}

