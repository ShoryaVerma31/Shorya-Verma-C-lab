#include <stdio.h>

// Function to find maximum in an array
int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Function to find minimum in an array
int findMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

// Function to compute average of array elements
float computeAverage(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

// Function for linear search
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i; // return index
    }
    return -1; // not found
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find maximum and minimum
    int max = findMax(arr, n);
    int min = findMin(arr, n);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    // Compute average
    float avg = computeAverage(arr, n);
    printf("Average of elements: %.2f\n", avg);

    // Linear search
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);
    int index = linearSearch(arr, n, key);
    if(index != -1)
        printf("%d found at index %d\n", key, index);
    else
        printf("%d not found in the array\n", key);

    return 0;
}
