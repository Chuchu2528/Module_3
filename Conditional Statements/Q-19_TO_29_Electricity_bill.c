/*Write a program in C to calculate and print the electricity bill of a given customer.
The customer ID, name, and unit consumed by the user should be captured from 
the keyboard to display the total amount to be paid to the customer.*/

#include<stdio.h>
main()
{
	int c_id, unit_con;
	float total_amt;
	char cus_name [50];
	
	printf("\n\n\t Enter customer id : ");
	scanf("%d", &c_id);
	
	printf("\n\n\t Enter Customer name : ");
	scanf("%s", &cus_name);
	
	printf("\n\n\t Enter consumed Units : ");
	scanf("%d",&unit_con);
	
	float unit_charge;
	
	if(unit_con <= 350)
		unit_charge = 1.2;
	else if (unit_con > 350 && unit_con < 650)
		unit_charge = 1.5;
	else if (unit_con >= 600 && unit_con < 800)
		unit_charge = 1.8;
	else
		unit_charge = 2.00;
	
	total_amt = unit_con * unit_charge;
	printf("\n\n\t Total amount to be paid : %.2f", total_amt);
	
}
