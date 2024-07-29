//Array of structure

#include <stdio.h>

#define SIZE 2

struct employee
{
    int id;
    char name[100];
    float salary;
    int service_year;
};
typedef struct employee employee;

void input(employee []);
void display(employee []);
void update_salary(employee []);

int i;
/*
    --> An array name is itself a pointer
*/
int main()
{
    employee emp[SIZE];

    printf("\nInput in Array: \n");
    input(emp); //pass by reference

    update_salary(emp);

    printf("\nOutput in Array: \n");
    display(emp);

    return 0;
}

void input(employee arr[])
{
    for(i=0; i<SIZE; i++)
    {
        printf("\nEnter id: ");
        scanf("%d", &arr[i].id);

        printf("\nEnter name: ");
        scanf(" %[^\n]s", arr[i].name);

        printf("\nEnter salary: ");
        scanf("%f", &arr[i].salary);

        printf("\nEnter service year: ");
        scanf("%d", &arr[i].service_year);
    }
}

void display(employee arr[])
{
    for(i=0; i<SIZE; i++)
    {
        printf("\nID: %d\t NAME: %s\t SALARY: %.2f\t SERVICE: %d", arr[i].id, arr[i].name, arr[i].salary, arr[i].service_year);
    }
}

void update_salary(employee arr[])
{
    for(i=0; i<SIZE; i++)
    {
        if(arr[i].service_year >= 5)
        {
            arr[i].salary = arr[i].salary + arr[i].salary * 0.1;
            printf("\nCongratulations %s, Your salary is increased.\n", arr[i].name);
        }
        else
        {
            printf("\nSorry %s, Your salary will be increased after %d years.\n", arr[i].name, 5-arr[i].service_year);
        }
    }
}
