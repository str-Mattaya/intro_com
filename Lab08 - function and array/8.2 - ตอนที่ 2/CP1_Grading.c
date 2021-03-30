#include <stdio.h>

void grading(int N, float score[100], char grade[100])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("Student #%03d\t%5.1f\t  %c\n", i+1, score[i], grade[i]);
    }
}

int main()
{
    int N;
    printf("Enter number of students: "); scanf(" %d", &N);

    if(N < 1 || N > 100)
    {
        printf("Out of Range");
        return -1;
    }

    int i;
    float score[100];
    char grade[100];

    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("Enter score of Student #%03d: ", i+1); scanf(" %f", &score[i]);
        if(score[i] < 0 || score[i] > 100)
        {
            printf("Out of Range");
            return -1;
        }
        grade[i] = 'F';
        if(score[i] > 50)
            grade[i] = 'P';
    }

    printf("-------------------------------------\n");
    printf("Grade Report\tScore\tGrade\n");
    grading(N,score,grade);

    return 0;
}
