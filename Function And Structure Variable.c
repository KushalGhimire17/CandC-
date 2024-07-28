#include <stdio.h>

//structure definition
struct date_of_birth
{
    int year, month, day;
};
typedef struct date_of_birth date_of_birth;

struct student
{
    int roll;
    char name[100];
    float percent;
    date_of_birth dob;
};
typedef struct student student;

void input(student*);
void display(student);
void change_percent(student*);

int main()
{
    student s1, s2;

    printf("\nEnter s1 data: ");
    input(&s1);

    printf("\nEnter s2 data: ");
    input(&s2);

    change_percent(&s1);
    change_percent(&s2);

    printf("\ns1 data: \n");
    display(s1);

    printf("\ns2 data: \n");
    display(s2);

    return 0;
}

void input(student* s)
{
    char c;
    printf("\nEnter roll no: ");
    scanf("%d", &s->roll);

    while((c=getchar()) != '\n') {}
    printf("\nEnter Name: ");
    scanf("%[^\n]s", s->name);

    printf("\nEnter Percent: ");
    scanf("%f", &s->percent);

    printf("\nEnter DOB[yy-mm-dd]: ");
    scanf("%d-%d-%d", &s->dob.year, &s->dob.month, &s->dob.day);
}

void display(student s)
{
    printf("\nROLL: %d \tNAME: %s \tPERCENT: %.2f \tDOB: %d-%d-%d \n", s.roll, s.name, s.percent, s.dob.year, s.dob.month, s.dob.day);
}

void change_percent(student* s)
{
    if(s->percent <= 40)
    {
        s->percent = 50;
    }
}
