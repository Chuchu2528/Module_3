//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
main()
{
	int n, rem, max_digit = 0;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n % 10;
		if(rem > max_digit)
		{
			max_digit = rem;
		}
		
		n=n/10; 
	}
	
	printf("Maximum digit is: %d", max_digit);
}
