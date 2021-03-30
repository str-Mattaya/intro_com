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

void showStudents(Student std[], int n)
{
    int i;
    printf("----------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("ID: %s\n", std[i].id);
        printf("Name: %s\n", std[i].name);
        printf("GPA: %.2f\n", std[i].gpa);
        printf("Status: %s\n", std[i].status);
        printf("----------------------------\n");
    }
}

void setStatus(Student std[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(std[i].gpa >= 3.5)
            strcpy(std[i].status, "Excellent");
        else if(std[i].gpa >= 2)
            strcpy(std[i].status, "Pass");
        else if(std[i].gpa >= 1.5)
            strcpy(std[i].status, "Critical");
        else
            strcpy(std[i].status, "Fail");
    }
}

void maxGPA(Student std[], int n)
{
    int i;
    int m = std[0].gpa;
    for(i=0;i<n;i++)
    {
        if(std[i].gpa > m)
            m = std[i].gpa;
    }

    printf("----------------------------\n");
    for(i=0;i<n;i++)
    {
        if(std[i].gpa == m)
        {
            printf("ID: %s\n", std[i].id);
            printf("Name: %s\n", std[i].name);
            printf("GPA: %.2f\n", std[i].gpa);
            printf("Status: %s\n", std[i].status);
            printf("----------------------------\n");
        }
    }
}

float avgGPA(Student std[], int n)
{
    float m = 0;
    int i;
    for(i=0;i<n;i++)
    {
        m += std[i].gpa;
    }
    return m/n;
}

int countCritical(Student std[], int n)
{
    int m = 0;
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(std[i].status, "Critical") == 0)
            m++;
    }
    return m;
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
    setStatus(std, size);
    showStudents(std, size);

    printf("\nThere is/are %d critical(s).", countCritical(std, size));
    printf("\nAverage of GPA = %.2f\n", avgGPA(std, size));
    printf("\nStudent with max GPA:\n\n");
    maxGPA(std, size);


    return 0;
}
