//Write a C Program to Print the Multiplication Table of N

#include<stdio.h>
main()
{
	int n, i=1;
	
	printf("\n\n\t Enter n : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("\n\n\t %d * %d = %d",n, i, n*i);
		i++;
	}
	
}

