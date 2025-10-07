#include <stdio.h>

int fib(int n) {
    if (n == 0) return 0;   // base case
    if (n == 1) return 1;   // base case
    return fib(n-1) + fib(n-2); // recursion
}

int main() {
    int k;
    printf("Enter number of terms: ");
    scanf("%d", &k);

    printf("First %d terms of Fibonacci series:\n", k);
    for (int i = 0; i < k; i++) {
        printf("%d ", fib(i));
    }
    return 0;    
}