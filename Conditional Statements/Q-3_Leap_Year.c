//WAP to check if the given year is a leap year or not.

#include<stdio.h>
main()
{
	int year;
	
	printf("\n\n\t Enter a year : ");
	scanf("%d", &year);
	
	if(year%4==0)
	{
		printf("\n\n\t %d is leap year ",year);
	}
	else
	{
		printf("\n\n\t %d is not leap year ",year);
	}
}
