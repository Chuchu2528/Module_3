// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>
main()

{
    int n, sum = 0, i, inner_sum = 0, j;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) 
    
	{   
        for(j = 1; j <= i; j++) 
		{
            inner_sum += j;
        }
        sum += inner_sum;
    }
    
    printf("The sum of the series is: %d\n", sum);
    
}
