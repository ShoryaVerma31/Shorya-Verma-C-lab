// magic matrix - a matrix in which sum of every rows , every columns & both diagonals are same
#include<stdio.h>

int main(){
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[10][10];
    printf("Enter elements:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0, rowSum, colSum;
    
    for(j=0; j<n; j++) // sum of first 
        sum += a[0][j];


    for(i=0; i<n; i++){
        rowSum = colSum = 0;
        for(j=0; j<n; j++){
            rowSum += a[i][j];
            colSum += a[j][i];
        }
        if(rowSum != sum || colSum != sum){
            printf("Not a Magic Square\n");
            return 0;
        }
    }
    // d1,d2 -> diagonal
    int d1=0, d2=0;
    for(i=0; i<n; i++){
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }
    if(d1!=sum || d2!=sum){
        printf("Not a Magic Square\n");
    }
    else{
        printf("It is a Magic Square\n");
    }

    return 0;
}