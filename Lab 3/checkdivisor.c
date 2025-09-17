#include<stdio.h>

int main(){
    int a,b;  // a-> smaller number, b->larger number
    printf("Enter th value of a");
    scanf("%d",&a);
    printf("Enter th value of b");
    scanf("%d",&b);
    
    if((b%a) == 0){
        printf("the number is divisible");
    }
    else{
        printf("the number is not divisible");
    }
    return 0;
}