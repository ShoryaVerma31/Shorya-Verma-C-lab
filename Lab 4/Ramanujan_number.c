#include <stdio.h>

int main() {
    int L, count, i, j;
    printf("Enter the limit L: ");
    scanf("%d", &L);

    printf("Ramanujan numbers up to %d:\n", L);

    for (int n = 1; n <= L; n++) {
        count = 0;
        for (i = 1; i * i * i < n; i++) {
            for (j = i; j * j * j <= n; j++) {   // allow equality
                if (i * i * i + j * j * j == n) {
                    count++;
                    if (count == 1)
                        printf("%d = %d^3 + %d^3", n, i, j);
                    else if (count == 2)
                        printf(" = %d^3 + %d^3", i, j);
                }
            }
        }
        if (count >= 2) {
            printf("\n");
        }
    }

    return 0;
}
