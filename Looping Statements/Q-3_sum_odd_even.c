/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include<stdio.h>
main()
{
	int n, i, e_count=0, o_count=0, sum;
	
	printf("\n\n\t Enter n : ");
	scanf("%d",&n);
	
		i=1;
	while(i<=10)
	{
		if(i%2==0)
		{
			sum=sum+i;
			printf("\n\n\t Even :  %d", i);
			e_count++;
		}
		i++;
	}
	
	i=1;
	while(i<=10)
	{
		if(i%2!=0)
		{
			sum=sum+i;
			printf("\n\n\t Odd :  %d", i);
			o_count++;
		}
		i++;
	}
	
	
	printf("\n\n\n\t ----------------------------");
	printf("\n\n\t Total Even Numbers are %d", e_count);
	printf("\n\n\t Total Odd Numbers are %d", o_count);
		
	printf("\n\n\n\t Sum of all even numbers  = %d", e_count);
	printf("\n\n\n\t Sum of all odd numbers  = %d", o_count);
}
	

