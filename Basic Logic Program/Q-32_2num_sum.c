// wap Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main()
{
	int num1, num2, sum;
	
	printf("\n\n\t ennter num1 : ");
	scanf("%d",&num1);
	
	printf("\n\n\t ennter num2 : ");
	scanf("%d",&num2);
	
	sum=num1+num2;
	printf("\n\n\t toral number of %d : ",sum);
	
	if(sum>100)
		{
			printf("\n\n\t sum is greater then 100 : ");
		}
		else if (sum<100)
		{
			printf("\n\n\t sum is less then 100 ; ");
		}
		else
		{
			printf("\n\n\t sum is equal to 100 : ");
		}
	
	
}
