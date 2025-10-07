#include<stdio.h>

int main(){
    int n, i, j;
    int a[3][3];
    int det=0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    
    printf("Enter elements:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    if(n == 1){
        det = a[0][0];
    }
    else if(n == 2){
        det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    }
    else if(n == 3){
        det = (a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1] )) - (a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0] )) + (a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0] ));
    } 
    else {
        printf("Matrix size is not appropriate.\n");
        return 0;
    }

    printf("Determinant = %d\n", det);

    return 0;
}