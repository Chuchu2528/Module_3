//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
main()
{
	int n, rev;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rev=n%10; 
		printf("%d",rev); 
		n=n/10; 
	}
}
