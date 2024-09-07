// WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	int a, b, c;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d", &a);
	printf("\n\n\t Enter b number : ");
	scanf("%d", &b);
	printf("\n\n\t Enter c number : ");
	scanf("%d", &c);
	
	if(a>=b && a>=c)
		printf("\n\n\t %d is largest number ",a);
		
	else if(b>=a && b>=c)
		printf("\n\n\t %d is largest number ",b);
		
	else 
		printf("\n\n\t %d is largest number ",c);
			
}
