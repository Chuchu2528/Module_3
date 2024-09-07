//WAP to find reverse of string using recursion


#include <stdio.h>

void reverse_string(char* str) 
{
    if (*str == '\0') return;
    reverse_string(str + 1);
    printf("%c", *str);
}

int main() 
{
    char str[100];
    printf("\n\n\t Enter a string: ");
    scanf("%s", str);
    printf("\n\n\t Reverse of the string is: ");
    reverse_string(str);
}
