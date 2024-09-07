/*area of Triangle 
Formula : A = 1/2 × b × h*/

#include<stdio.h>
main()

{
	float b, h, area;
	
	printf("\n\n\t Enter the base of the triangle: ");
	scanf("%f", &b);
	
	printf("\n\n\t Enter the height of the triangle: ");
	scanf("%f", &h);
	
	area = 0.5*b*h;
	printf("\n\n\t the base & height of the triangle is: %.2f", area);
}
