#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int arr[n],sum[n];
    printf("enter numbers in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum[0] = arr[0];
    for(int i=1;i<n;i++){
        sum[i] = sum[i-1] + arr[i];
        
    }
    for(int i=0;i<n;i++){
        printf("%d ",sum[i]);
    
    }
    

    return 0;
}