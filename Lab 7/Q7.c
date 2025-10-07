#include <stdio.h>

// Function to check palindrome
int isPalindrome(int n) {
    int original = n, reversed = 0, digit;

    while (n > 0) {
        digit = n % 10;            // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        n = n / 10;                // remove last digit
    }

    if (original == reversed)
        return 1;   // palindrome
    else
        return 0;   // not palindrome
}

int main() {
    int count, num;

    printf("How many numbers do you want to test? ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);

        if (isPalindrome(num))
            printf("%d is a Palindrome\n", num);
        else
            printf("%d is NOT a Palindrome\n", num);
    }

    return 0;
}
