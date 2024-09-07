//Accept the input month number and print number of days in that month.

#include<stdio.h>
main()
{
	int m;
	
	printf("\n\n\t Enter a month number : ");
	scanf("%d", &m);
	
	if(m==1 || m==3 ||m==5 || m==7 ||m==8 ||m==10 ||m==12)
		printf("\n\n\t 31 days ");
		
	else if(m==4 || m==6 ||m==9 ||m==11)
		printf("\n\n\t 30 days ");
	
	else if(m==2)
		printf("\n\n\t 28/29 days ");
	else
	{
		printf("\n\n\t Invalid number ");
	}
}
