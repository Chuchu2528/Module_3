//WAP to find factorial using recursion

#include<stdio.h>
main()
{
	int x,i, fact=1;
	
	printf("\n\n\t enter a number to find factorial : ");
	scanf("%d", &x);
	
	i=1;
	while(i<=x)
	{
		fact=fact*i;
		i=i+1;
	}
	
	printf("\n\n\t factorial %d = %d",x, fact);
	
}
