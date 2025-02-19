//Structures
#include <stdio.h>
#include <string.h>

//structure define
struct employee
{
    //structure data member
    char name[50];
    int id;
    float salary;
};
typedef struct employee employee;
int main()
{

    //structure variable declare
    employee emp1, emp2;
    char c;

    //assign
    //accessing structure member using dot(.) operator
    emp1.id = 1;
    strcpy(emp1.name, "Kushal Ghimire");
    emp1.salary = 2200.44;

    //user input
    printf("\nEnter employee id: ");
    scanf("%d", &emp2.id);
    printf("\nEnter employee salary: ");
    scanf("%f", &emp2.salary);

    while(c = getchar() != '\n'){}

    printf("\nEnter employee name: ");
    scanf("%[^\n]s", &emp2.name);

    //output
    printf("\nID: %d \t NAME: %s \t SALARY: %.2f", emp1.id, emp1.name, emp1.salary);
    printf("\nID: %d \t NAME: %s \t SALARY: %.2f", emp2.id, emp2.name, emp2.salary);

    return 0;
}
