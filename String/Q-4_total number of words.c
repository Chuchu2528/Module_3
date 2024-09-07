//Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <string.h>
main()
{
    char str[100];
    int i, wordCount = 1;

    printf("\n\n\t Enter a string: ");
    gets(str); 

    for (i = 0; str[i] != '\0'; i++) 
	{
        
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') 
		{
            wordCount++;
        }
    }

    printf("\n\n\t Total number of words: %d\n", wordCount);

}
