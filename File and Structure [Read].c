//File Handling
#include <stdio.h>

struct employee
{
    int id;
    float salary;
    char name[100];
};
typedef struct employee employee;

void display(employee);

int i;

int main()
{
    FILE *fptr;

    fptr = fopen("structure.dat", "rb");

    if(fptr == NULL)
    {
        perror("\nFile Read Failed");
        return -1;
    }

    employee emp1, emp2;

    printf("\Reading emp1 records to the file\n");
    fread(&emp1, sizeof(employee), 1, fptr);

    printf("\Reading emp2 records to the file\n");
    fread(&emp2, sizeof(employee), 1, fptr);

    printf("\nReading employee records to the file is completed successfully\n");

    printf("\nemp1 record: \n");
    display(emp1);

    printf("\nemp2 record: \n");
    display(emp2);

    fclose(fptr);

    return 0;
}

void display(employee emp)
{
    printf("\nID: %d\t SALARY: %.2f\t NAME: %s\n", emp.id, emp.salary, emp.name);
}
