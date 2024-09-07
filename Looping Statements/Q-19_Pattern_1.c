#include <stdio.h>
main() 
{
    int i = 0, j = 0, k = 0 , n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    while (i < n) 
	{
        j = 0;
        while (j < (n - i - 1)) 
		{
            printf(" ");
            j++;
        }
        
        k = 0;
        while (k <= i) 
		{
            printf("*");
            k++;
        }
     
        k = i;
        while (k > 0) 
		{
            printf("*");
            k--;
        }
   
        printf("\n");
        i++;
    }

   
}

