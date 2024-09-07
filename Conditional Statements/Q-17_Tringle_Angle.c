/*Write a C program to check whether a triangle can be formed with the 
given values for the angles.*/

#include<stdio.h>
main()
{
	int angle1, angle2, angle3;
	
	printf("\n\n\t Emter angle1 : ");
	scanf("%d", &angle1);
	printf("\n\n\t Emter angle2 : ");
	scanf("%d", &angle2);
	printf("\n\n\t Emter angle3 : ");
	scanf("%d", &angle3);
	
	if(angle1 + angle2 + angle3 == 180)
	
		printf("\n\n\t triangle can be formed ");
	
	else
		printf("\n\n\t triangle cannot be formed");
			
}
