/*WAP for Area of Square 
Formula : a = a2 */


#include<stdio.h>
main()

{
	float side, area;
	
	printf("\n\n\t Enter the side length of the square: ");
	scanf("%f", &side);
	
	area= side*side;
	printf("\n\n\t The area of the square is: %.2f", area);
}
