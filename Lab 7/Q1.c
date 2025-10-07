#include<stdio.h>
void greet(){
    printf("Welcome to the Basic function Program\n");
}

int add(int a, int b){
    return a+b;
}

float circle_area(float r){
    float area = 3.14 * r * r; // formula-> pie*(r^2) 
    return area;
}

int main(){
    greet(); 

    int x=2, y=8;
    int sum = add(x, y);
    printf("sum of %d and %d : %d\n",x,y,sum);

    float radius = 7.0;
    float area = circle_area(radius);
    printf("area of circle with radius %.2f is %.2f\n",radius,area);
    return 0;
}