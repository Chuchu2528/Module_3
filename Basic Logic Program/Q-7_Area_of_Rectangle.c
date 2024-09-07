/*area of Rectangle 
Formula : A=wl*/

#include<stdio.h>
main()

{
	float w, l, area;
	
	printf("\n\n\t Enter the weight of the Rectangle: ");
	scanf("%f", &w);
	
	printf("\n\n\t Enter the lenght of the Rectangle: ");
	scanf("%f", &l);
	
	area = w*l;
	printf("\n\n\t the weight & lenght of the Rectangle is: %.2f", area);
}
