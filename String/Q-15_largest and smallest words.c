// Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLargestAndSmallestWord(char str[]) 
{
    char word[100], smallest[100], largest[100];
    int i = 0, length = 0, minLength = 100, maxLength = 0;

    strcpy(smallest, "");
    strcpy(largest, "");

    while (str[i] != '\0') 
	{

        int j = 0;
        while (!isspace(str[i]) && str[i] != '\0') 
		{
            word[j++] = str[i++];
        }
        word[j] = '\0';  

        length = strlen(word);

        if (length > 0 && length < minLength) 
		{
            minLength = length;
            strcpy(smallest, word);
        }

        if (length > 0 && length > maxLength) 
		{
            maxLength = length;
            strcpy(largest, word);
        }

        while (isspace(str[i]) || ispunct(str[i])) 
		{
            i++;
        }
    }

    printf("\n\n\t Smallest word: %s", smallest);
    printf("\n\n\t Largest word: %s\n", largest);
}
main() 
{
    char str[200];

    printf("\n\n\t Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    findLargestAndSmallestWord(str);

}
