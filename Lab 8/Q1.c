#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); 
    struct Student class[50]; 
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter roll: ");
        scanf("%d", &class[i].roll);
        getchar(); 
        printf("Enter name: ");
        fgets(class[i].name, sizeof(class[i].name), stdin);
        class[i].name[strcspn(class[i].name, "\n")] = '\0'; 

        printf("Enter marks: ");
        scanf("%f", &class[i].marks);
        getchar();
    }

    
    printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n",
               class[i].roll, class[i].name, class[i].marks);
    }

    return 0;
}

