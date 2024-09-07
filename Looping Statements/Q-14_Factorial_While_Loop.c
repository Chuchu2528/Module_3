//calculate the Factorial of a Given Number using while loop

#include <stdio.h>
main() 
{
    int numbers[5], i, j;
    unsigned long long fact;

    printf("\n\n\t Enter 5 numbers: ");
    
    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) 
	{
        fact = 1;
        for (j = 1; j <= numbers[i]; j++) 
		{
            fact *= j;
        }
        printf("\n\n\n Factorial of %d is %llu\n", numbers[i], fact);
    }

}
