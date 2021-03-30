#include <stdio.h>
#include <string.h>

struct Student
{
    char id[14];
    char name[61];
    float gpa;
    char status[16];
};

typedef struct Student Student;

void showStudent(Student std)
{
    printf("ID: %s\n", std.id);
    printf("Name: %s\n", std.name);
    printf("GPA: %.2f\n", std.gpa);
    printf("Status: %s\n", std.status);
    printf("----------------------------\n");
}

void setStatus(Student *std)
{
    if((*std).gpa >= 3.5)
        strcpy((*std).status, "Excellent");
    else if((*std).gpa >= 2)
        strcpy((*std).status, "Pass");
    else if((*std).gpa >= 1.5)
        strcpy((*std).status, "Critical");
    else
        strcpy((*std).status, "Fail");
}

int main()
{
    const int size = 4;
    Student *std = malloc(sizeof(Student) * size);

    printf("Enter new data:\n\n");
    int i;
    for(i=0;i<size;i++)
    {
        printf("Student #%d\n", i+1);
        fflush(stdin);
        printf("Enter Name: "); gets(std[i].name);
        fflush(stdin);
        printf("Enter ID: "); gets(std[i].id);
        printf("Enter GPA: "); scanf(" %f", &std[i].gpa);
    }

    printf("\nAll students:\n\n");
    printf("----------------------------\n");
    for(i=0;i<size;i++)
    {
        setStatus(&std[i]);
        showStudent(std[i]);
    }

    return 0;
}
