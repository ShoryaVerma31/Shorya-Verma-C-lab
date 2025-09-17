#include<stdio.h>

int main(){
    int n;
    printf("Enter the number n = ");
    scanf("%d", &n);
    int q = n/2;
    int count =1;
    while (q>1){
        q = q/2;
        count++;
    }
    printf("%d",count);
    return 0;
}