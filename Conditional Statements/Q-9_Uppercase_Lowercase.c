//C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
main()
{
	char ch;
	
	printf("\n\n\t Enter any character : ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\n\n\t %c is an Uppercase letter ",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("\n\n\t %c is an Lowercase letter ",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\n\n\t %c is a Digit ",ch);
	}
	
	else
	{
		printf("\n\n\t %c is a special character ",ch);
	}
}
