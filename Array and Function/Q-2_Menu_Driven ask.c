/*WAP of Addition, Subtraction, 
Multiplication and Division using Switch case.(Must Be Menu Driven)*/

#include<stdio.h>
main()
{
	int choice, num1, num2;
	float result;
	
	while(1)
	{
	
	printf("\n\n\t simple calculation ");
	printf("\n\n\t press 1. Addition ");
	printf("\n\n\t press 2. Subtraction ");
	printf("\n\n\t press 3. Multiplication ");
	printf("\n\n\t press 4. Division ");
	printf("\n\n\t press 5. exit ");
	
	printf("\n\n\t enter a choice of number (1-5) : ");
	scanf("%d", &choice);
	
	if(choice==5)
	{
		printf("\n\n\t exiting the program. Goodbye!");
		break;
	}
	printf("\n\n\t enter the first number : ");
	scanf("%d", &num1);
	printf("\n\n\t enter the second number : ");
	scanf("%d", &num2);
	
	switch(choice)
	{
		case 1: 
			printf("\n\n\t result of addition: %d ",num1+num2);
			break;
		case 2: 
			printf("\n\n\t result of Subtract: %d ",num1-num2);
			break;
		case 3:
			printf("\n\n\t result of Multiply: %d ",num1*num2);
			break;
		case 4:	
		 	if(result!=0)
		{
			printf("\n\n\t result of Divide: %2f ",num1/num2);
		}
		else {
                    printf("Error: Division by zero is not allowed.\n");
            }
		break;
		
		default:
		printf("\n\n\t invalid choice....Please choose a valid option");
		break;		
		 	 	
	}
    }
}
