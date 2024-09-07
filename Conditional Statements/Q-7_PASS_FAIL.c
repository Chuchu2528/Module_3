//WAP Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d", &num);
	
	if(num>=35)
	{
		printf("\n\n\t Outcome : Pass ");
	}
	else
	{
		printf("\n\n\t Outcome : Fail ");
	}
}
