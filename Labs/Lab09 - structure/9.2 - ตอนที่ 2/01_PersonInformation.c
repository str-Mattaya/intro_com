#include <stdio.h>
#include <string.h>

struct Person
{
    char id[14];
    char name[61];
    int age;
};

typedef struct Person Person;

int main()
{
    Person p1,p2;

    strcpy(p1.name,"Nadech Naraknaya");
    strcpy(p1.id,"3100500511001");
    p1.age = 21;

    printf("Enter ID: "); scanf(" %s", p2.id);
    fflush(stdin);
    printf("Enter Name: "); gets(p2.name);
    printf("Enter Age: "); scanf(" %d", &p2.age);

    printf("\nP1\n");
    printf("Name: %s\n", p1.name);
    printf("ID: %s\n", p1.id);
    printf("Age: %d\n", p1.age);

    printf("\nP2\n");
    printf("Name: %s\n", p2.name);
    printf("ID: %s\n", p2.id);
    printf("Age: %d\n", p2.age);

    return 0;
}
