#include<stdio.h>

int main(){
    int length, breadth, area, perimeter;
    printf("Enter length\n");
    scanf("%d",&length);
    printf("Enter breadth\n");
    scanf("%d",&breadth);

    printf("area is %d\n" ,area = length*breadth);
    printf("perimeter is %d\n",perimeter = length+breadth);
    return 0;
}