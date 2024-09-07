// Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>

void substring(char str[], int start, int length)
{
    char sub[100]; 
    int i;

    for (i = 0; i < length && (start + i) < strlen(str); i++) 
	{
        sub[i] = str[start + i];
    }
    sub[i] = '\0'; 

    printf("\n\n\t Extracted substring: %s\n", sub);
}

main() 
{
    char str[100];
    int start, length;


    printf("\n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    printf("\n\n\t Enter the starting index: ");
    scanf("%d", &start);
    printf("\n\n\t Enter the length of the substring: ");
    scanf("%d", &length);

    substring(str, start, length);

}
