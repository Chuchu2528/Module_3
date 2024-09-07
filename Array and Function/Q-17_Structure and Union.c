//WAP to show difference between Structure and Union.

#include <stdio.h>
#include <string.h>

struct Person 
{
    char name[50];
    int age;
    float height;
};

union Data 
{
    int i;
    float f;
    char str[50];
};

main() 
{
    struct Person person;
    strcpy(person.name, "Alice");
    person.age = 30;
    person.height = 5.5;

    printf("Structure:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f\n", person.height);

    union Data data;
    data.i = 10;
    printf("\n\n\t Union (after setting int value):");
    printf("Int: %d\n", data.i);

    data.f = 3.14;
    printf("Float: %.2f\n", data.f); 
    
    strcpy(data.str, "Hello");
    printf("String: %s\n", data.str);

    printf("\n\n\t Union (after setting string value): ");
    printf("\n\n\t Int (after string assignment): %d", data.i);
    printf("\n\n\t Float (after string assignment): %.2f", data.f);
    printf("\n\n\t String: %s\n", data.str);

}
