/*Calculate 5 numbers from user and calculate number of 
even and odd using of while loop*/

#include<stdio.h>
main()
{ 
	int i, num, even=0, odd=0;
	
	printf("\n\n\t enter 5 number :");
	
	i=0;
	while(i<5)
		{
		scanf("%d",&num);
        if (num % 2 == 0) 
		{
            even++;    
        } 
        
		else 
		{
            odd++;
        }

        i++;
  		}
  		
		printf("\n\n\n\t Total even number are %d",even);
		printf("\n\n\n\t Total odd number are %d",odd);
}
