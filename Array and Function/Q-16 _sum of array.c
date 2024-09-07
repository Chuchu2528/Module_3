//Accept 5 numbers from user and perform sum of array

#include <stdio.h>
main() 
{
    int numbers[5], i; 
    int sum = 0; 

    printf("\n\n\t Enter 5 numbers : ");
    
    for (i = 0; i < 5; i++) 
	{
        printf("Number %d : ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("\n\n\t The sum of the numbers is : %d", sum);

}
