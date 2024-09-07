// Write a C program to calculate profit and loss on a transaction

#include<stdio.h>
main()
{
	float s_price, c_price, p, l;
	
	printf("\n\n\t Enter the Selling price : ");
	scanf("%f",&s_price);
	
	printf("\n\n\t Enter the Cost price : ");
	scanf("%f",&c_price);
	
	if(s_price > c_price)
		{
		p = s_price - c_price;
		printf("\n\n\t %.2f is profit ",p);
		}
	else if (c_price > s_price)
		{
		l = c_price - s_price;
		printf("\n\n\t %.2f is loss ",l);
		}
	else
		{ 
		printf("\n\n\t no profit, no loss ");
		}
}
