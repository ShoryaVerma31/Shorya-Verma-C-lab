#include <stdio.h>

int main() {
    int n1, n2, i, j;
    
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    printf("Common elements (Intersection): ");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;  // avoid printing duplicates if multiple matches
            }
        }
    }
    printf("\n");
    
    return 0;
}
