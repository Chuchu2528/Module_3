// Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
main()
{
	int s1, s2, s3, s4, s5, average, salary;
	char x[20], y[20], z[20], a[20], b[20]; 
	
	printf("\n\n\t Enter name and salary : ");
	scanf("%s %d", &x,&s1);
	printf("\n\n\t Enter name and salary : ");
	scanf("%s %d", &y,&s2);
	printf("\n\n\t Enter name and salary : ");
	scanf("%s %d", &z,&s3);
	printf("\n\n\t Enter name and salary : ");
	scanf("%s %d", &a,&s4);
	printf("\n\n\t Enter name and salary : ");
	scanf("%s %d", &b,&s5);
	
	salary = s1+s2+s3+s4+s5;
 	average= salary / 5;
	
	printf("\n\n\t Total salary : %d",salary);
	printf("\n\n\t average : %d", average);
	
}
