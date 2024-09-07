/*Write a program in C to read any Month Number in integer 
and display the number of days for this month.*/

#include<stdio.h>
main()
{
	int m, d;
	
	printf("\n\n\t Enter a Month : ");
	scanf("%d", &m);
	
	if(m==1 || m==3 || m==5 || m==7 ||
	   m==8 || m==10 || m==12) // check for 31 days 
	   printf("\n\n\t 31 days ");
	   
	else if (m==4 || m==6 || m==9 || m==11) // check for 30 days 
	   printf("\n\n\t 30 days ");
	
	else if (m==2) // check for 28 or 29 days 
	   printf("\n\n\t 28/29 days ");
	   
	else
		printf("\n\n\t Invalid numbers ");
		
}
