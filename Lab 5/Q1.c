#include<stdio.h>

int main(){
    int n;
    printf("Enter the no. of elements in an array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i =0; i<n ;i++){
        scanf("%d",&arr[i]);

    }

    int neg_count=0;
    int pos_count=0;
    for(int i=0; i<n;i++){
        if(arr[i]<0){
            neg_count++;
        }
        else{
            pos_count++;
        }
    }
    printf("Number of negative number in the array:%d\n",neg_count);
    printf("Number of positive number in the array:%d\n",pos_count);
    return 0;
}