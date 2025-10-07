#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int arr[n],new[2*n];
    printf("enter numbers in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<(2*n);i++){
        new[i]=arr[i/2];
        
    }
    for(int i=0;i<(2*n);i++){
        printf("%d ",new[i]);
    
    }
    

    return 0;
}