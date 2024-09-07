/*WAP program to print below output using for loop*/

#include <stdio.h>
main()
{
    int num = 1, i, j;

    for (i = 1; i <= 5; i++) 
	{       
        for (j = 1; j <= 10; j++) 
		{  
            printf("%02d ", num);       
            num++;
        }
        printf("\n");  
    }

    return 0;
}
