//wap Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
main()
{
	int a, b;
	
	printf("\n\n\t enter the a : ");
	scanf("%d",&a);
	
	printf("\n\n\t enter the b : ");
	scanf("%d" ,&b);
	
	if(a==b)
	{
		printf("\n\n\t %d and %d are equal ",a ,b);
	}
	else
	{
		printf("\n\n\t %d and %d are not equal ",a ,b);
	}	

}
