/* WAP to make simple calculator (operation include Addition, 
Subtraction, Multiplication,Division, modulo) using conditional statement*/

#include<stdio.h>
main()
{
	int a, b, choice;
	
	printf("\n\n\t Enter any two numbers : ");
	scanf("%d %d", &a, &b);
	
	printf("\n\n\n\t----------------------------------------");
	printf("\n\n\t press 1 for Addition ");
	printf("\n\n\t press 2 for Subtraction ");
	printf("\n\n\t press 3 for Multiplication ");
	printf("\n\n\t press 4 for Division ");
	printf("\n\n\t press 5 for modulo ");
	printf("\n\n\t press 6 for exit ");
	printf("\n\n\n\t------------------------------------");
	printf("\n\n\t enter any choice of number ");
	scanf("%d", &choice);
	
	if(choice==1)
	
		printf("\n\n\t Addition = %d ",a+b);
	
	else if (choice==2)
	
		printf("\n\n\t Subtraction = %d ",a-b);
		
	else if (choice==3)
	
		printf("\n\n\t Multiplication = %d ",a*b);	
	
	else if (choice==4)
	
		printf("\n\n\t Division = %d ",a/b);
	
	else if (choice==5)
	
		printf("\n\n\t modulo = %d ",a%b);	
	
	else 
	
		printf("\n\n\t Invalid number !! Try again....... ");
	
}
