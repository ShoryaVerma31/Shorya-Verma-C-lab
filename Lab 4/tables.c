#include<stdio.h>

int main(){
    
    for(int i=1; i<=13 ;i++){
        printf("%d table :",i);
        for(int j=1;j<=10;j++){
           printf("%d ",i*j); 
        } 
        printf("\n"); // blank line after each table 
    }
    
    return 0;
}