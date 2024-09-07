/*
A
A B
A B C
A B C D
A B C D E
*/
#include<stdio.h>
main()
{
	int r, c, n;
	char ch;
	
	printf("\n\n\t Lines for Triangle : ");
	scanf("%d",&n);
	
	r=1;
	while(r<=n)
	{
		ch='A';
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
