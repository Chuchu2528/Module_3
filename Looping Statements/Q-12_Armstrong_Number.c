//Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
#include<math.h>

int main() 
{
    int num, temp, rem, n = 0;
    int result = 0;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for(;temp != 0; temp /= 10) 
	{
        n++;
    }

    temp = num;

    if(result == num) 
	{
        printf("\n\n\t %d is an Armstrong number. ", num);
    } else 
	{
        printf("\n\n\t %d is not an Armstrong number. ", num);
    }
}
