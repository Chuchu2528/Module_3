// WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int a;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d",&a);
	
	(a%2==0) ? printf("\n\n\t %d is even number ",a) : printf("\n\n\t %d is odd number ",a);
}
