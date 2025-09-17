#include<stdio.h>

int main(){
    int a,b,c;
     printf("Enter th value of a");
    scanf("%d",&a);
    printf("Enter th value of b");
    scanf("%d",&b);
    printf("Enter th value of c");
    scanf("%d",&c);
    if(a>b && c>b){
        printf("b is the smallest");
    }
    if(b>a && c>a){
        printf("a is the smallest");
    }
    else{
        printf("c is the smallest");
    }
    
    return 0;
}