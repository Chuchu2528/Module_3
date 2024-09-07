//Write a program in C to count the total number of vowels or consonants in a string.

#include <stdio.h>
#include <ctype.h>
main() 
{
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("\n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i]; i++) 
	{
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
        else if (ch >= 'a' && ch <= 'z')
            consonants++;
    }

    printf("\n\n\t Vowels: %d", vowels);
    printf("\n\n\t Consonants: %d", consonants);

}
