#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student students[100];
    int n = 0; // number of students
    int choice;

    do {
        printf("\n--- Student Menu ---\n");
        printf("1. Add student\n");
        printf("2. Display students\n");
        printf("3. Search by roll number\n");
        printf("4. Update marks\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) { // Add student
            printf("Enter roll: ");
            scanf("%d", &students[n].roll);
            printf("Enter name: ");
            scanf("%s", students[n].name);
            printf("Enter marks: ");
            scanf("%f", &students[n].marks);
            n++;
            printf("Student added!\n");
        }
        else if(choice == 2) { // Display students
            if(n == 0) {
                printf("No records found.\n");
            } else {
                printf("\nRoll\tName\tMarks\n");
                for(int i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", students[i].roll, students[i].name, students[i].marks);
                }
            }
        }
        else if(choice == 3) { // Search by roll
            int roll, found = 0;
            printf("Enter roll to search: ");
            scanf("%d", &roll);
            for(int i = 0; i < n; i++) {
                if(students[i].roll == roll) {
                    printf("Found: %d %s %.2f\n", students[i].roll, students[i].name, students[i].marks);
                    found = 1;
                    break;
                }
            }
            if(!found) printf("Student not found.\n");
        }
        else if(choice == 4) { // Update marks
            int roll, found = 0;
            float newMarks;
            printf("Enter roll to update: ");
            scanf("%d", &roll);
            for(int i = 0; i < n; i++) {
                if(students[i].roll == roll) {
                    printf("Current marks of %s: %.2f\n", students[i].name, students[i].marks);
                    printf("Enter new marks: ");
                    scanf("%f", &newMarks);
                    students[i].marks = newMarks;
                    printf("Marks updated!\n");
                    found = 1;
                    break;
                }
            }
            if(!found) printf("Student not found.\n");
        }
        else if(choice == 5) {
            printf("Exiting program.\n");
        }
        else {
            printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    return 0;
}
