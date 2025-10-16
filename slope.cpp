//WAPC to input the coordinates of two points (x1, y1) and (x2, y2). Calculate the slope and display the same.

#include<stdio.h>
int main()
{
	int x1,y1,x2,y2;
	float slope;
	printf("\nEnter the coordinates of 2 points : ");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	slope=(y1-y2)/(x1-x2);
	printf("\nslope of the given 2 points are : %.2f" , slope);
	return 0;
}
