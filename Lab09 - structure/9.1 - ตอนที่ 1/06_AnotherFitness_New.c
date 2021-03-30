#include <stdio.h>
#include <string.h>
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
typedef struct Date Date;

Member extend(Member M, Date exp)
{
	Member N;
	strcpy(N.name, M.name);
	N.age = M.age;
    N.expire.day = exp.day;
    N.expire.month = exp.month;
    N.expire.year = exp.year;
    return N;
}

// Show Members' Information
void showAll(Member M[], int size)
{
    printf("-----------------------------\n");
    int i;
    for(i=0;i<size;i++)
    {
        printf("Member #%d\nName: ", i+1);
        puts(M[i].name);
        printf("Age: %d\n", M[i].age);
        printf("Expired Date: %02d/%02d/%04d\n", M[i].expire.day, M[i].expire.month, M[i].expire.year);
        printf("-----------------------------\n");
    }
}

// Input Members' Information
void inputMember(Member M[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("= Member #%d =\n", i+1);
        fflush(stdin);
        printf("Enter name: "); gets(M[i].name);
        fflush(stdin);
        printf("Enter age: "); scanf(" %d", &M[i].age);
        fflush(stdin);
        printf("Enter expired date (dd/mm/yyyy): "); scanf(" %d/%d/%d", &M[i].expire.day, &M[i].expire.month, &M[i].expire.year);
        printf("\n");
    }
}

// Print Members' Expire Date
void printExp(Member M[],int size, int month)
{
    printf("-----------------------------\n");
    int i;
    for(i=0;i<size;i++)
    {
        if(M[i].expire.month == month)
        {
            printf("Member #%d\nName: ", i+1);
            puts(M[i].name);
            printf("Age: %d\n", M[i].age);
            printf("Expired Date: %02d/%02d/%04d\n", M[i].expire.day, M[i].expire.month, M[i].expire.year);
            printf("-----------------------------\n");
        }

    }
}

//Find Oldest Member and print his information
void findOldest(Member M[],int size)
{
    int i;
    int age = M[0].age;
    
    //Find Oldest Age
    for(i=0;i<size;i++)
    {
        if(M[i].age > age)
        {
            age = M[i].age;
        }
    }

    printf("-----------------------------\n");
    //Find Position and Print
    // "for" loop stand for some case that oldest age has many positions
    for(i=0;i<size;i++)
    {
        if(M[i].age == age)
        {
            printf("Member #%d\nName: ", i+1);
            puts(M[i].name);
            printf("Age: %d\n", M[i].age);
            printf("Expired Date: %02d/%02d/%04d\n", M[i].expire.day, M[i].expire.month, M[i].expire.year);
            printf("-----------------------------\n");
        }
    }
}

//Convert char of 0-9 to numeral
int ctoi(char ch)
{
    if(ch >= '0' && ch <= '9')
        return ch - '0';

    return -1;
}

//Convert numeral to string
int stoi(char str[])
{
    if(strlen(str) == 1)
        return ctoi(str[0]);
    else if(strlen(str) == 2)
    {
        if(str[0] != '1' && str[0] != '0')
            return -1;

        return 10 * ctoi(str[0]) + ctoi(str[1]);
    }

    return -1;
}

int main()
{
	//Init 3 members array
    const int size = 3;
    Member *mem = malloc(sizeof(Member) * size);
    char ch;

    inputMember(mem,size);
    showAll(mem, size);
    printf("\n");
    
    //Make User-friendly? Interaction Box
    system("pause");
    for(;;)
    {
        system("cls");
        printf("What do you want to do?\n");
        printf("======================================================================");
        printf("\n1. Alter Expired Date");
        printf("\n2. Show members whose license is going to expire in spectific month");
        printf("\n3. Find oldest member\n");
        printf("\nQ. Quit Program\n");
        printf("======================================================================");
        printf("\nYour choice > "); scanf(" %c", &ch);

        if(ch == '1')
        {
            system("cls");
            printf("Select member to alter their expire date\n");
            showAll(mem, size);
            printf("\nYour choice > "); scanf(" %c", &ch);

            if(ctoi(ch) > 0)
            {
                Date date;
                //Clear Screen
                system("cls");
                printf("You select Member #%d\n", ctoi(ch));
                printf("Enter new expired date (dd/mm/yyyy): "); scanf(" %d/%d/%d", &date.day, &date.month, &date.year);
                //ch is char ctoi convert ch to number and minus 1 -> position of array member
                mem[ctoi(ch)-1] = extend(mem[ctoi(ch)-1], date);
                printf("\nSuccess\n\n");
                system("pause");
                system("cls");
                printf("Current Data\n\n");
                showAll(mem, size);
                printf("\n");
            }else
            {
                printf("\nTry again later\n\n");
            }
        }else if(ch == '2')
        {
            system("cls");
            char month[3];
            printf("Enter month (1-12): "); scanf(" %s", month);
            int m = stoi(month);

            if(m < 1 || m > 12)
            {
                printf("\nTry again later\n\n");
            }else
            {
                system("cls");
                printf("Members whose license is going to expire at Month %02d\n\n", m);
                printExp(mem, size, m);
                printf("\n");
            }

        }else if(ch == '3')
        {
            system("cls");
            printf("Oldest Member\n\n");
            findOldest(mem, size);
            printf("\n");
        }else if(ch == 'Q' || ch == 'q')
        {
            printf("\nQuitting...\n\n");
            system("pause");
            return 0;
        }
        else
        {
            printf("\nTry again later\n\n");
        }
        system("pause");
    }
    showAll(mem,3);
    
    //Delete allocate memory
    free(mem);
    return 0;
}
