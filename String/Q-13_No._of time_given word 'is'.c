// Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <ctype.h> 
main() 
{
    char str[100], result[100];
    int i, j = 0;

    printf("\n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i])) 
		{
            result[j++] = str[i];  
        }
    }

    result[j] = '\0'; 

    printf("\n\n\t String after removing non-alphabet characters: %s\n", result);

}
