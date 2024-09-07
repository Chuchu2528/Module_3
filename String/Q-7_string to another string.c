//Write a program in C to copy one string to another string.

#include <stdio.h>

void copyString(char source[], char destination[]) 
{
    int i = 0;

    while (source[i] != '\0') 
	{
        destination[i] = source[i];
        i++;
    }
    
    destination[i] = '\0';
}

main() 
{
    char source[100], destination[100];

    printf("\n\n\t Enter the source string: ");
    gets(source); 

    copyString(source, destination);

    printf("\n\n\t The copied string is: %s\n", destination);

}
