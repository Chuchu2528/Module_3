/*WAP for Area of a rectangular prism
formula : A=2(wl+hl+hw)
*/

#include<stdio.h>
main()
{
	float W, l, h, w, area;
	
	printf("\n\n\t Enter the width of the Rectangle prism: ");
	scanf("%f", &w);
	
	printf("\n\n\t Enter the Lenght of the Rectangle prism: ");
	scanf("%f", &l);
	
	printf("\n\n\t Enter the Height of the Rectangle prism: ");
	scanf("%f",&h);
	
	area = 2*(w*l+h*l+h*w);
	printf("\n\n\t Area of a rectangular prism is : %f", area);
	
}
	
