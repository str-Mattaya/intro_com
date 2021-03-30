#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Member
{
    char name[256];
    int age;
    struct Date expire;
};

typedef struct Member Member;

void inputMember(Member M[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("= Member #%d =\n", i+1);
        printf("Enter name: "); scanf(" %s", M[i].name);
        printf("Enter age: "); scanf(" %d", &M[i].age);
        printf("Enter expired date (dd/mm/yyyy): "); scanf(" %d/%d/%d", &M[i].expire.day, &M[i].expire.month, &M[i].expire.year);
        printf("\n");
    }
}

int main()
{
    Member *mem = malloc(sizeof(Member) * 3);

    inputMember(mem,3);

    printf("-----------------------------\n");
    int i;
    for(i=0;i<3;i++)
    {
        printf("Member #%d\nName: ", i+1);
        puts(mem[i].name);
        printf("Age: %d\n", mem[i].age);
        printf("Expired Date: %02d/%02d/%04d\n", mem[i].expire.day, mem[i].expire.month, mem[i].expire.year);
        printf("-----------------------------\n");
    }

    free(mem);
    return 0;
}
