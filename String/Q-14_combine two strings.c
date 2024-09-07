// Write a program in C to combine two strings manually

#include <stdio.h>
main() 
{
    char str1[100], str2[100], combined[200]; 
    int i = 0, j = 0;

    printf("\n\n\t Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    str1[strcspn(str1, "\n")] = 0;

    printf("\n\n\t Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    str2[strcspn(str2, "\n")] = 0;

    while (str1[i] != '\0') 
	{
        combined[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') 
	{
        combined[i] = str2[j];
        i++;
        j++;
    }

    combined[i] = '\0'; 

    printf("\n\n\t Combined string: %s", combined);

}
