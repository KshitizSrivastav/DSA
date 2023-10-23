#include <stdio.h>
#include <string.h>

// Structure to store employee information
struct Employee {
    char name[50];
    float salary;
    int hours;
};
int main()
{
    struct Employee emp[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &emp[i].hours);
    }
    for (int i = 0; i < 10; i++)
    {
        if(emp[i].hours>=8)
            emp[i].salary=emp[i].salary+50;
    }
    printf("Employee names and final salaries:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Name: %s, Salary: $%.2f\n", emp[i].name, emp[i].salary);
    }
    return 0;
}

