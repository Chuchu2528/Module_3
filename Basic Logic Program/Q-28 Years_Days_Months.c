// WAP Convert years into days and months
#include<stdio.h>
main()
{
	int days, months, years;
	
	printf("\n\n\t enter the number of years : ");
	scanf("%d", &years);
	
	
	days = years * 365;
	months = years * 12;
	
	printf("\n\n\t %d years", years);
	printf("\n\n\t %d months", months);
	printf("\n\n\t %d days", days);
}
