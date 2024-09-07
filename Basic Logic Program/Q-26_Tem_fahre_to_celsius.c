// Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float Fahrenheit, Celsius;
	
	printf("Enter temperature of fahrenheit : ");
	scanf("%f", &Fahrenheit);
	
	Celsius= (Fahrenheit-32)*5/9;
	
	printf("\n\t %.2f Fahrenheit to Celsius : %.2f", Fahrenheit, Celsius);
}
