//WAPC to do the following:
//Input: account balance, withdrawal amount.
//Follow the given rules:
//Withdrawal amount must be a multiple of 100.
//Withdrawal must not exceed balance.
//Maintain a minimum balance of ?500 after withdrawal.
//Output: Transaction success or failure with reason.
#include<stdio.h>

int main()
{
	int balance, withdrawal,afterwithdrawal,check=0;
	printf("enter the account balance and withdrawal amount");
	scanf("%d %d",&balance,&withdrawal);
	afterwithdrawal= balance - withdrawal;
	if(withdrawal%100==0)
	check=1;
	else
	printf("transaction failed Withdrawal amount must be a multiple of 100.");
	if(withdrawal<balance)
	check=1;
	else
	printf("transaction failed Withdrawal must not exceed balance");
	if(afterwithdrawal>=500&&check==1)
	printf("transaction sucessful");
	else
	printf("transaction failed Maintain a minimum balance of 500 after withdrawal");
	return 0;
}
