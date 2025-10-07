#include<stdio.h>

long factorial(int n){
    long fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n,r;
    printf("enter n and r : ");
    scanf("%d %d", &n ,&r);

    if(r<0 || r>n ){
        printf("Invalid Input...! r must be between 0 and n.\n");
    }
    else{
        long result = factorial(n) / (factorial(r) * factorial(n-r));
        printf("C(%d, %d) = %ld\n", n, r, result);
    }
    return 0;
}