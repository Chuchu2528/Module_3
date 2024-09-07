//Write a program in C to compare two strings without using string library functions.

#include <stdio.h>

int compareStrings(char str1[], char str2[]) 
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') 
	{
        if (str1[i] != str2[i]) 
		{
            return (str1[i] - str2[i]); 
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') 
	{
        return 0;
    } 
	else if (str1[i] == '\0') 
	{
        return -1; 
    } else 
	{
        return 1; 
    }
}

main() 
{
    char str1[100], str2[100];
    int result;

    printf("\n\n\t Enter first string: ");
    gets(str1); 
    printf("\n\n\t Enter second string: ");
    gets(str2);

    result = compareStrings(str1, str2);

    if (result == 0) 
	{
        printf("\n\n\t The strings are equal.\n");
    } 
	else if (result < 0) 
	{
        printf("\n\n\t The first string is less than the second string.\n");
    } 
	else 
	{
        printf("\n\n\t The first string is greater than the second string.\n");
    }

}
