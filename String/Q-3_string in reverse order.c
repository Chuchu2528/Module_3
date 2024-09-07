//Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>
main() 
{
    char str[100];
    int length, i;

    printf("\n\n\t Enter a string: ");
    gets(str);  

    length = strlen(str);

    printf("\n\n\t The string in reverse order:\n");
    for (i = length - 1; i >= 0; i--) 
	{
        printf("\n\n\t Character at index %d: %c\n", i, str[i]);
    }

}
