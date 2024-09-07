// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
#include <string.h>
main() 
{
    char str[100];
    printf("\n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int max_length = 0, i;
    
    for(i = 0; i < strlen(str); i++) 
	{
        if(strlen(&str[i]) > max_length) 
		{
            max_length = strlen(&str[i]);
        }
    }
    
    printf("\n\n\t The maximum number of characters in a substring is: %d\n", max_length);

}
