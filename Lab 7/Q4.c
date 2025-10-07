#include<stdio.h>
#include <stdio.h>

// Function to find length of string
int strLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

// Function to reverse string
void strReverse(char str[]) {
    int len = strLength(str);
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

// Function to compare two strings (1 if equal, 0 otherwise)
int strCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return 1;
}

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Length
    printf("Length of first string: %d\n", strLength(str1));
    printf("Length of second string: %d\n", strLength(str2));

    // Compare
    if (strCompare(str1, str2))
        printf("Strings are equal\n");
    else
        printf("Strings are NOT equal\n");

    // Reverse first string
    strReverse(str1);
    printf("Reversed first string: %s\n", str1);

    return 0;
}


