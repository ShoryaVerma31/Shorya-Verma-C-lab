#include<stdio.h>

int main(){
    char name[50];
    int age;
    
    printf("Enter name\n");
    scanf("%s",&name);
    printf("Enter age\n");
    scanf("%d",&age);

    
    printf(" hello, %s! you are %d year old\n", name, age);
    getchar();
    getchar();

    return 0;
}