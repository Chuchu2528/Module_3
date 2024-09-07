//WAP Calculate sum of 10 numbers using of while loop

#include<stdio.h>
main()
{
	int i=0, num, sum=0;
	
	printf("\n\n\t enter 10 no. :");
	
	while(i<10)
		{
			printf("\n\n\t Enter number %d: ", i+1);
        	scanf("%d", &num);
        	sum+=num;
        	i++;
		}
	
	printf("\n\n\n\t sum of 10 number is : %d",sum);
}
