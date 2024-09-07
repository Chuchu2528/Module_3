//calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int num, fact=1, i=1;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	
	printf("\n\n\t factorial of %d is: %d", num, fact);
	
}
