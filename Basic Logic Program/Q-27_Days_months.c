// wap Convert days into months

#include<stdio.h>
main()
{
	int days, months;
	
	printf("\n\n\t enter the number of days : ");
	scanf("%d", &days);
	
	months= days / 30;
	printf("\n\n\t %d is equal to %d months",days, months);
	
}
