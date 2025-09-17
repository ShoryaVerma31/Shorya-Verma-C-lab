#include<stdio.h>

int main(){
    int x1,x2,x3,x4,x5;
    printf("enter the five integer\n");
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&x3);
    scanf("%d",&x4);
    scanf("%d",&x5);
    float average=(x1+x2+x3+x4+x5)/5;
    printf("average is %f\n",average);
    return 0;
}