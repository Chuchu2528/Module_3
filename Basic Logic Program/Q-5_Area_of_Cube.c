/*WAP for Area of Cube 
Formula : a = 6a2 */


#include<stdio.h>
main()

{
	float a, area;
	
	printf("\n\n\t Enter length of one side of the cube: ");
	scanf("%f", &a);
	
	area=6*a*2;
	printf("\n\n\t The area of the cube is: %.2f", area);
}
