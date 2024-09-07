//WAP to input the week number and print week day.

#include<stdio.h>
main()
{
	int week;
	
	printf("\n\n\t Enter a week (1-7) : ");
	scanf("%d", &week);
	
	if(week==1)
		printf("\n\n\t Monday ");
	else if(week==2)
		printf("\n\n\t Tuesday ");
	else if(week==3)
		printf("\n\n\t Wednesday ");
	else if(week==4)
		printf("\n\n\t Thursday ");
	else if(week==5)
		printf("\n\n\t Friday ");
	else if(week==6)
		printf("\n\n\t Saturday ");	
	else if(week==7)
		printf("\n\n\t Sunday ");
		
	else 
	{
		printf("\n\n\t Invalid number !!! please enter week number (1-7)");
	}
	
}
