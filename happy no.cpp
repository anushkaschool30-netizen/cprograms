//WAPC to input a positive integer. Check whether it is Happy or not. Note: Happy Number – A number that eventually 
//reaches 1 when replaced repeatedly by the sum of the squares of its digits. Example: 19 ? 1²+9²=82 ? 8²+2²=68 ? 
//6²+8²=100 … ? 1
#include<stdio.h>

int main()
{
	int num ,check=0,lstdgt,temp;
	printf("enter a no");
	scanf("%d",&num);
	temp=num;
	while((num!=1)&&(num!=4))
	{
		check=0;
	while(num>0)
	{
		lstdgt=num%10;
		check=check+(lstdgt*lstdgt);
		num=num/10;
	}
	num=check;
	
}
if (num == 1)
        printf("%d is a Happy Number.\n", temp);
    else
        printf("%d is not a Happy Number.\n", temp);
return 0;	

}
