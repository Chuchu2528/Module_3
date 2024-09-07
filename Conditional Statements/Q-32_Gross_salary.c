/*Write a C program to input basic salary of an employee and calculate its
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include<stdio.h>
main()
{
	float basic_sal, hra, da, gross;

	
	printf("\n\n\t Enter the Basic salary of the employee : ");
	scanf("%f", &basic_sal);
	
	if(basic_sal<=10000)
		{
		da = basic_sal*0.80;
		hra = basic_sal*0.20;
		}
	else if (basic_sal<=20000)
		{
		da = basic_sal*0.90;
		hra = basic_sal*0.25;
 		}
	else (basic_sal>20000);
		{
		da = basic_sal*0.95;
		hra = basic_sal*0.30;
		}
	gross= basic_sal + da + hra;
	
	printf("\n\n\t gross salary = %.2f",gross);
	
}
