#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    printf("enter a\n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    printf("enter c\n");
    scanf("%d",&c);
    
    float x,y;
    x = (-b+sqrt(b*b-4*a*c))/(2*a);
    y = (-b-sqrt(b*b-4*a*c))/(2*a);
    printf("roots of this equation are %f %f",x,y);
    return 0;
}