// WAP to calculate swap 2 numbers with using of multiplication and division

#include<stdio.h>
main()
{
	int a ,b;
	
	printf("\n\n\t enter a : ");
	scanf("%d",&a);
	printf("\n\n\t enter b : ");
	scanf("%d",&b);
	
	printf("\n\n\n\t Before Swapping---------------");
	printf("\n\n\n\t a = %d",a);
	printf("\n\n\n\t b = %d",b);
	
	a= a * b;
	b= a / b;
	a= a / b;
	
	printf("\n\n\n\t After Swapping---------------");
	printf("\n\n\n\t a = %d",a);
	printf("\n\n\n\t b = %d",b);
	
	printf("\n\n\t multiplication %d",a*b);
	printf("\n\n\t division %d",a/b);
	
}
