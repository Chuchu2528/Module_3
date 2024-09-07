//wap 2 numbers from user and swap 2 numbers with using 3rd variable 

#include<stdio.h>
main()
{
	int num1, num2, num3;
	
	printf("\n\n\t enter num1 : ");
	scanf("%d",& num1);
	printf("\n\n\t enter num2 : ");
	scanf("%d",& num2);


	printf("\n\n\t Before Swapping-----------");
	printf("\n\n\t num1 = %d",num1);
	printf("\n\n\t num2 = %d",num2);
	
	
	
	num3=num1;
	num1=num2;
	num2=num3;
	
	printf("\n\n\t After Swapping-----------");
	printf("\n\n\t num1 = %d",num1);
	printf("\n\n\t num2 = %d",num2);
	
	
}
