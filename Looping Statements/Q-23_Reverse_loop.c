//C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
main()
{
	int n, rem;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d",&n);
	
	for(n>0;rem=n%10;n=n/10)
	{
		
		printf("%d",rem); 
		
	}
}
