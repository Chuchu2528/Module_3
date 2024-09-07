//Check Number Is Positive or Negative

#include<stdio.h>
main()
{
	int a;
	
	printf("\n\n\t Enter any number ");
	scanf("%d", &a);
	
	if(a>0)
		{
			printf("\n\n\n\t %d number is positive ",a);
		}
		
	else
		{
			printf("\n\n\n\t %d number is Negative ",a);
		}
}
