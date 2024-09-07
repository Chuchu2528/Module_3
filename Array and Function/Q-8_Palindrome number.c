//WAP to perform Palindrome number using for loop and function


#include <stdio.h>

int isPalindrome(int num) 
{
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    for (; num != 0; num /= 10) 
	{
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    if (originalNum == reversedNum)
	{
        return 1;  
    } else
	{
        return 0; 
    }
}

int main() 
{
    int number;

    
    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) 
	{
        printf("\n\n\t %d is a palindrome.\n", number);
    } else 
	{
        printf("\n\n\t %d is not a palindrome.\n", number);
    }

}
