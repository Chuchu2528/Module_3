//WAP Calculate person’s Annual salary

#include<stdio.h>
main()
{
	int n;
    float salary;

    printf("Enter your monthly salary: ");
    scanf("%f", &salary);
    printf("\n\n\t Enter n");
    scanf("%d",&n);

    salary=salary*12;
    printf("Your annual salary is: %.2f\n", salary);

}
