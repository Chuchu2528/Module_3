//WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>
main() 
{
    int numbers[5], i; 

    printf("\n\n\t Enter 5 numbers: ");
      
    for (i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);  
    }

    printf("\n\n\t Even or Odd check:\n");
    
    for (i = 0; i < 5; i++) 
	{
        if (numbers[i] % 2 == 0) 
		{
            printf("\n\n\t Number %d (%d) is Even\n", i + 1, numbers[i]);
        } 
		else 
		{
            printf("\n\n\t Number %d (%d) is Odd\n", i + 1, numbers[i]);
        }
    }

}
