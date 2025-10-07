#include<stdio.h>

int main() {
    int n, i, j, k;
    int a[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int found = 0;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            int min = a[i][j];

            // check if a[i][j] is minimum in row
            for(k=0;k<n;k++){
                if(a[i][k] < min){
                    min = a[i][k];
                    break;
                }
            }

            if(min != a[i][j]) continue; // not min in row

            // check if a[i][j] is maximum in column
            int max = a[i][j];
            for(k=0;k<n;k++){
                if(a[k][j] > max){
                    max = a[k][j];
                    break;
                }
            }

            if(max == a[i][j]){
                printf("Saddle point: %d at position (%d,%d)\n", a[i][j], i, j);
                found = 1;
            }
        }
    }

    if(!found) printf("No saddle point.\n");

    return 0;
}
