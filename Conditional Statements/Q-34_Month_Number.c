//Accept month number and display month name

#include<stdio.h>
main()
{
	int month;
	
	printf("\n\n\t Enter a month number (1-12) : ");
	scanf("%d", &month);
	
	if(month==1)
		printf("\n\n\t January");
	else if (month==2)
		printf("\n\n\t February ");
	else if (month==3)
		printf("\n\n\t March ");
	else if (month==4)
		printf("\n\n\t April ");
	else if (month==5)
		printf("\n\n\t May ");
	else if (month==6)
		printf("\n\n\t June ");
	else if (month==7)
		printf("\n\n\t July ");
	else if (month==8)
		printf("\n\n\t August ");
	else if (month==9)
		printf("\n\n\t September ");
	else if (month==10)
		printf("\n\n\t October ");
	else if (month==11)
		printf("\n\n\t November ");
	else if (month==12)
		printf("\n\n\t December ");
	else
	{
	printf("\n\n\t Invalid number !!!! please enter valid month number (1-12)");
	}
}
