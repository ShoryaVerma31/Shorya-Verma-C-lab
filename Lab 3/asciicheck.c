#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Hexadecimal : %X\n",num);
    printf("Octal : %o\n",num);

    if(num >= 32 && num <= 126){
        printf("ASCII Character : %c\n",num);
    }
    else{
        printf("No printable ASCII character for this value.\n");
    }
    return 0;
}