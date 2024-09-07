//1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>
main()
{
    int n, sum = 0, i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) 
	{
        sum += i;
    }
    
    printf("\n\n\t The sum of the series is: %d", sum);
 
}
