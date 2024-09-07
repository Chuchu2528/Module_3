// WAP Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
main()
{
	int n, i=1, sum=0;
	
	printf("\n\n\t Enter a Positive number ");
	scanf("%d",&n);
	
	while(i<=n)
	{
        	sum+=i;
        	i++;
	}
	
	printf("\n\n\n\t sum of Natural numbers from 1 to %d is : %d",n, sum);
	
}
