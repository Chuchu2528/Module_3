/*Write a program in C to count the total number of alphabets,
 digits and special characters in a string.*/

#include <stdio.h>
main() 
{
    char str[100];
    int i, alphabets = 0, digits = 0, specialCharacters = 0;

    printf("\n\n\t Enter a string: ");
    gets(str); 

    for (i = 0; str[i] != '\0'; i++) 
	{
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		{
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9') 
		{
            digits++;
        }

        else 
		{
            specialCharacters++;
        }
    }

    printf("\n\n\t Total Alphabets: %d ", alphabets);
    printf("\n\n\t Total Digits: %d\n", digits);
    printf("\n\n\t Total Special Characters: %d ", specialCharacters);

}
