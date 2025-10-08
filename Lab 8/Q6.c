#include <stdio.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE, EXIT };

int main() {
    int choice;
    int a, b;
    enum Operation op;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        //here while loop work as infinite loop it will work untill choice = exit.

        op = choice; // store choice in enum variable

        if (op == EXIT) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);

        switch (op) {
            case ADD:
                printf("Result = %d\n", a + b);
                break;
            case SUBTRACT:
                printf("Result = %d\n", a - b);
                break;
            case MULTIPLY:
                printf("Result = %d\n", a * b);
                break;
            case DIVIDE:
                if (b == 0)
                    printf("Error: Division by zero not allowed!\n");
                else
                    printf("Result = %.2f\n", (float)a / b);
                break;
            default:
                printf("Invalid choice! Please enter between 1 and 5.\n");
        }
    }

    return 0;
}
