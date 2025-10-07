#include <stdio.h>


int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isPrime(int n) {
    if (n <= 1)
        return 0; // Not prime
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int choice, num;

    do {
        printf("\n---- MENU ----\n");
        printf("1. Find Factorial\n");
        printf("2. Check Prime\n");
        printf("3. Reverse Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d = %d\n", num, factorial(num));
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a Prime number\n", num);
                else
                    printf("%d is NOT a Prime number\n", num);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Reverse of %d = %d\n", num, reverseNumber(num));
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
