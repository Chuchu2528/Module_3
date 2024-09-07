//wap 1 2 3 6 9 18 27 54...

#include <stdio.h>
main()

{
    int n, term = 1, i;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) 
	{
        printf("%d ", term);
        if(i % 2 == 1)
		{
            term += i;
        } 
		else 
		{
            term *= 2;
        }
    }
    printf("\n");
    
}
