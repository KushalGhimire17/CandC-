#include <stdio.h>
#define SIZE 5

void input(int []);
void display(int []);
int count_even(int []);
int find_element(int [], int);
void replace_element(int [], int, int);
void menu();

int i;

int main()
{
    int num[SIZE], choice, count, val, index;

    do
    {
        menu();
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            input(num);
            break;
        case 2:
            count = count_even(num);
            printf("\nThere are %d even numbers", count);
            break;
        case 3:
            printf("\nEnter element to search: ");
            scanf("%d", &val);
            index = find_element(num, val);
            if(index != -1)
                printf("\n%d is stored at %d index", val, index);
            else
                printf("\n%d not found", val);
            break;
        case 4:
            printf("\nElements in the array are: ");
            display(num);
            break;
        case 5:
            printf("\nEnter new element: ");
            scanf("%d", &val);
            printf("\nEnter index / position: ");
            scanf("%d", &index);
            replace_element(num, val, index);
            break;
        case 6:
            printf("\nExiting from the system");
            break;
        default:
            printf("\nInvalid Choice");
        }

        printf("\n\n");
    }while(choice != 6);

    return 0;
}

void menu()
{
    printf("\nEnter \n1 Input in Array \n2 Count Even Element in Array \n3 Find Element in Array \n4 Display All Elements \n5 Replace element \n6 Exit: ");
}


void input(int arr[])
{
    for(i=0; i<SIZE; i++)
    {
        printf("\nEnter element: ");
        scanf("%d", &arr[i]);
    }
}

void display(int arr[])
{
    for(i=0; i<SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int count_even(int arr[])
{
    int count = 0;

    for(i=0; i<SIZE; i++)
    {
        if(arr[i] % 2 == 0)
            count++;
    }

    return count;
}

int find_element(int arr[], int element)
{
    for(i=0; i<SIZE; i++)
    {
        if(arr[i] == element)
            return i;
    }
    return -1;
}

void replace_element(int arr[], int v, int in)
{
    if(in >= 0 || in < SIZE)
    {
        arr[in] = v;
        printf("\n%d is stored successfully at %d index", v, in);
    }
    else
    {
        printf("\nInvalid index");
    }
}
