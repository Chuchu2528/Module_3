//WAP Find out length of string without using inbuilt function

#include <stdio.h>

int main() 
{
    char str[100]; 
    int length = 0; 

    printf("\n\n\t Enter a string: ");
    gets(str);

    while (str[length] != '\0') .
	{
        length++;
    }

    printf("\n\n\t Length of the string is: %d\n", length);

}
