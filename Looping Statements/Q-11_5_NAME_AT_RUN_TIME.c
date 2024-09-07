//Accept 5 names from user at run time.

#include <stdio.h>
main() 
{
    char names[5][100]; 
    int i;

    printf("\n\n\t Enter 5 names: ");
    
    for (i = 0; i < 5; i++) 
	{
        printf("\n\n\t Enter name %d: ", i + 1);
        scanf("%s", names[i]); 
    }

    printf("\n\n\t The entered names are: ");
    
    for (i = 0; i < 5; i++) 
	{
        printf("\n\n\t Name %d: %s", i + 1, names[i]);
    }

}
