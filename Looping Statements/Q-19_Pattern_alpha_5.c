/*
A
B C 
D E F 	
G H I J
K L M N O
*/
#include<stdio.h>
main()
{
	int r, c, n;
	char ch='A';
	
	printf("\n\n\t Lines for Triangle : ");
	scanf("%d",&n);
					
	r=1;
	while(r<=n)
	{
		c=1;
		while(c<=r)
		{
			printf(" %c", ch);
			ch++;
			c++;
		}
		
		printf("\n");
		r++;
	}
}



