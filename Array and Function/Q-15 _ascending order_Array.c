//Store 5 numbers in array and sort it in ascending order

#include <stdio.h>
main() 
{
    int numbers[5], i, j;
    int temp;

    printf("\n\n\t Enter 5 numbers: ");
    
    for (i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 4; i++) 
	{ 
        for (j = 0; j < 4 - i; j++) 
		{ 
            if (numbers[j] > numbers[j + 1]) 
			{
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("\n\n\t Numbers in ascending order: ");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", numbers[i]);
    }
    
    printf("\n");

}
