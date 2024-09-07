/* WAP circumference of Triangle 
formula : triangle = a + b + c
*/

#include<stdio.h>
main()
{
	int a, b, c, triangle;
	
	printf("\n\n\t Enter any number1 : ");
	scanf("%d",&a);
	printf("\n\n\t Enter any number2 : ");
	scanf("%d",&b);
	printf("\n\n\t Enter any number3 : ");
	scanf("%d",&c);
	
	triangle = a+b+c;
	printf("\n\n\t The Circumference of Triangle is : %d",triangle);
	
}
