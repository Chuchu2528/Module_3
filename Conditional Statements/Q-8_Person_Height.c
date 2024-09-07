/*WAP to accept the height of a person 
in centimeters and categorize the person according to their height.*/

#include<stdio.h>
main()
{
	int height;
	
	printf("\n\n\t Enter a height of the person in centimeters : ");
	scanf("%d", &height);
	
	if(height<150)
	printf("\n\n\t the person is short height ");
	
	else if (height>=150 && height<165)
	printf("\n\n\t the person is average height ");
	
	else if (height>=165 && height<190)
	printf("\n\n\t the person is average height ");
	
	else
	{
		printf("\n\n\t the person is very tall ",height);
	}
}
