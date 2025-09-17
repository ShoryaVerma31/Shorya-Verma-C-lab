#include<stdio.h>

int main(){
    int a,b,c; // assuming that a,b,c are the sides of tringle
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);
    if((a<=0) || (b<=0) || (c<=0)){
        printf("This is not a vaild input.\n");
    } 
    if((a+b>c) && (b+c>a) && (c+a>b)){
        printf("Triangle is possible.\n");
    }
    else{
        printf("Triangle is not possible\n");
    }
    return 0;

}