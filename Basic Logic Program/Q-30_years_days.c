// WAP to convert years into days and days into years

#include <stdio.h>
main() 
{
    int years;
    int days;

    printf("\n\n\t Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365;

    printf("\n\n\t %d years is equivalent to %d days.", years, days);

}
