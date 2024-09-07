// WAP to print factorial of given number

#include<stdio.h>
main()
{
	int i, num, fact=1;
	
	printf("\n\n\t Enter any num : ");
	scanf("%d",&num);
	
	i=1;
	while(i<=num)
	{
		fact=fact*i;
		i=i+1;
	}
	
	printf("\n\n\t factorial %d = %d",num, fact);
}
