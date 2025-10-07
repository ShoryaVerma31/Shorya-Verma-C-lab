#include <stdio.h>
#include <stdlib.h>   // for abs()

int main() {
    int n, i, j;
    int a[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        int diag = abs(a[i][i]);   // for magnitude we use abs ex.|a_ii|
        int sum = 0;

        for(j = 0; j < n; j++) {
            if(i != j) {
                sum += abs(a[i][j]);
            }
        }

        if(diag < sum) {
            printf("The matrix is NOT diagonally dominant.\n");
            return 0;   // stop program immediately
        }
    }

    printf("The matrix is diagonally dominant.\n");
    return 0;
}
