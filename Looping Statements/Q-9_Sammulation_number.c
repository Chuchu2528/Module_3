// Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
main()
{
	int n, sum=0;
	 
	printf("\n\n\t Enter number : ");
	scanf("%d", &n);
	
	while(n!=0)
	{
		sum +=n % 10;
		n=n/10; 
	}
	
	printf(" summation : %d", sum);

}
