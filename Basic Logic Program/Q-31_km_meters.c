// wap Convert kilometers into meters

#include<stdio.h>
main()
{
	int km, meters;
	
	printf("\n\n\t enter the distance in km : ");
	scanf("%d", &km);
	
	meters= km*1000;
	
	printf("\n\n\t %d km is equal to %d meters ", km, meters);
	
}
