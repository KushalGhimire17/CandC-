//File Handling
#include <stdio.h>

struct employee
{
    int id;
    float salary;
    char name[100];
};
typedef struct employee employee;

void input(employee*);
int i;

int main()
{
    FILE *fptr;
    
    fptr = fopen("structure.dat", "wb");
    
    if(fptr == NULL)
    {
        perror("\nFile Creation Failed");
        return -1;
    }

    employee emp1, emp2;

    printf("\nEnter emp1 record: \n");
    input(&emp1);

    printf("\nEnter emp2 record: \n");
    input(&emp2);

    printf("\nemp1 record: \n");
    display(emp1);

    printf("\nemp2 record: \n");
    display(emp2);

    printf("\nWriting emp1 records to the file\n");
    fwrite(&emp1, sizeof(employee), 1, fptr);
    
    printf("\nWriting emp2 records to the file\n");
    fwrite(&emp2, sizeof(employee), 1, fptr);

    printf("\nWriting employee records to the file is completed successfully\n");

    fclose(fptr);
    
    return 0;
}

void input(employee* emp)
{
    printf("\nEnter id: ");
    scanf("%d", &emp->id);

    printf("\nEnter salary: ");
    scanf("%f", &emp->salary);

    printf("\nEnter name: ");
    scanf(" %[^\n]s", emp->name);
}

void display(employee emp)
{
    printf("\nID: %d\t SALARY: %.2f\t NAME: %s\n", emp.id, emp.salary, emp.name);
}
