//WAP to check whether a number is negative, positive or zero.	

#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t Enter a Number : ");
	scanf("%d", &num);
	
	if(num>0)
	{
		printf("\n\n\t %d is positive number : ",num);
	}
	else if(num<0)
	{
		printf("\n\n\t %d is negative number : ",num);
	}
	else
	{
		printf("\n\n\t %d is zero", num);
	}
}
