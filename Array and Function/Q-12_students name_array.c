//WAP to accept 5 students name and store it in array

#include <stdio.h>
main()
{
    char names[5][50], i; 

    printf("\n\n\t Enter the names of 5 students:\n");
    
    for (i = 0; i < 5; i++) 
	{
        printf("Name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
    }

    printf("\n\n\t The names of the students are:\n");
    
    for (i = 0; i < 5; i++) 
	{
        printf("\n\n\t Student %d: %s", i + 1, names[i]);
    }

}
