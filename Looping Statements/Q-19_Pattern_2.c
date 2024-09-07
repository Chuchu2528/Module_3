/*
1
1 0 
1 0 1  
1 0 1 0 
1 0 1 0 1 */

#include <stdio.h>
main()
{
    int r = 0, c = 0, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    while (r < n) 
	{
        c = 0;
        while (c <= r) 
		{
           
            if (c % 2 == 0) 
			{
                printf("1 ");
            } 
			else 
			{
                printf("0 ");
            }
            c++;
        }
        
        printf("\n");
        
    r++;
    
    }

}
