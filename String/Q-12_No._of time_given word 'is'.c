/*Write a program in C to find the number of times a
 given word 'is' appears in the given string.*/

#include <stdio.h>
#include <string.h>

int countOccurrences(char str[], char word[]) 
{
    int count = 0;
    char *token;
    
    token = strtok(str, " .,!?;:");  
 
    while (token != NULL) 
	{
        if (strcmp(token, word) == 0) 
		{
            count++;
        }
        token = strtok(NULL, " .,!?;:");
    }
    
    return count;
}
main() 
{
    char str[200];
    char word[] = "is"; 
    
    printf("\n\n\t Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;
    

    int result = countOccurrences(str, word);

    printf("\n\n\t The word '%s' appears %d times in the string.\n", word, result);
    

}

