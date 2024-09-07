//WAP for Make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
main()
{
	int a, b; //var decalaration
	a=20; //var. initialization
	b=40; //var. initialization
	
	printf("\n\n\t Enter any two numbers : ");
	scanf("%d %d", &a, &b);

	printf("\n\n\t a = %d", a);
	printf("\n\n\t b = %d", b);
	printf("\n\n\t a+b = %d", a+b); //'+' is an operator here.
	printf("\n\n\t a-b = %d", a-b);
	printf("\n\n\t a*b = %d", a*b);
	printf("\n\n\t a/b = %d", a/b);
	printf("\n\n\t a%b = %d", a%b);
	
}
