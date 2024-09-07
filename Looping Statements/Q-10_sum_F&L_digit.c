/* Write a program you have to make a summation of first and last Digit. 
(E.g., 1234 Ans: -5)*/

#include<stdio.h>
main()
{
	int n, sum=0, f_digit, l_digit;
	 
	printf("\n\n\t Enter number : ");
	scanf("%d", &n);
	
	l_digit = n%10;
		
	while(n>=10)
	{
	n=n/10;
	}

	f_digit = n;
	
	sum = f_digit + l_digit;
	
	printf(" sum of first digit and last digit : %d", sum);

}
