#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    float salary;
    struct Date doj;   // doj ->date of joining
};

int main() {
    struct Employee e[50];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        printf("Date of Joining (dd mm yyyy): ");
        scanf("%d %d %d", &e[i].doj.day, &e[i].doj.month, &e[i].doj.year);
    }

    printf("\n%-15s %-10s %-15s\n", "Name", "Salary", "Date of Joining");
    
    for(i = 0; i < n; i++) {
        printf("%-15s %-10.2f %02d-%02d-%4d\n",
               e[i].name, e[i].salary,
               e[i].doj.day, e[i].doj.month, e[i].doj.year);
    }

    printf("\nEmployees who joined after the year 2020:\n");
    int found = 0;
    for(i = 0; i < n; i++) {
        if(e[i].doj.year > 2020) {
            printf("%s\n", e[i].name);
            found = 1;
        }
    }

    if(!found)
        printf("No employee joined after 2020.\n");

    return 0;
}
