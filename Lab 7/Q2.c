#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;  // not prime
    }
    return 1; // prime
}

int main() {
    int lower_limit, higher_limit;

    // (a) to show all prime numbers between two limits
    printf("Enter two numbers (lower and upper): ");
    scanf("%d %d", &lower_limit, &higher_limit);

    printf("Prime numbers between %d and %d are:\n", lower_limit, higher_limit);
    for (int i = lower_limit; i <= higher_limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // (b) Find nth prime number
    int n, count = 0, num = 2;
    printf("Enter n to find nth prime number: ");
    scanf("%d", &n);

    while (1) {
        if (isPrime(num)) {
            count++;
            if (count == n) {
                printf("The %dth prime number is: %d\n", n, num);
                break;
            }
        }
        num++;
    }

    return 0;
}
