#include<stdio.h>

int main(){
    int num ;
    printf("Enter the number = ");
    scanf("%d", &num);

    int count =0;
    for (int i = 1; i <= num ; i++){
        int q = num%i;
        if (q == 0)
          count++;
    }
    if (count ==2){
        printf("the number is prime");
    }
    else{
        printf("the number is not prime");
    }
    return 0;
}