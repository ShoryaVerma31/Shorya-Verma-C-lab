#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter numbers in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<(2*n);i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    int max = arr[0];
    int min = arr[0];
    int sec_smallest;
    int sec_largest;

    for(int i=0;i<(2*n);i++){
        if(sec_smallest>arr[i] && arr[i] != min)[
            sec_smallest=arr[i];
        ]
        if(sec_largest>arr[i] && arr[i] != max)[
            sec_largest=arr[i];
        ]
    }
    printf("%d",sec_largest);
    
    printf("%d",sec_smallest);
    
    return 0;
}