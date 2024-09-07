//Write a program in C to separate individual characters from a string.

#include <stdio.h>
main() 
{
    char str[100];
    int i = 0;

    printf("\n\n\t Enter a string: ");
    gets(str); 

    while (str[i] != '\0') 
	{
        printf("\n\n\t Character at index %d: %c\n", i, str[i]);
        i++;
    }

}
