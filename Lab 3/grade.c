#include<stdio.h>

int main(){
    char c[2];
    printf("Enter grade = ");
    scanf("%c",&c);
    if((c=='AA') ||(c=='Aa') || (c=='aa')){
        printf("Exellent");
    }
    if((c=='AB') ||(c=='Ab') || (c=='ab')){
        printf("Very good");
    }
    if((c=='BB') ||(c=='Bb') || (c=='bb')){
        printf("Good");
    }
    if((c=='BC') ||(c=='Bc') || (c=='bc')){
        printf("Average");
    }
    if((c=='CC') ||(c=='Cc') || (c=='cc')){
        printf("Satisfactory");
    }
    if((c=='CD') ||(c=='Cd') || (c=='cd')){
        printf(" Pass");
    }
    if((c=='DD') ||(c=='Dd') || (c=='dd')){
        printf("Just Pass");
    }
    if((c=='FR') ||(c=='Ff') || (c=='ff')){
        printf("Fail");
    }
    else{
        printf("Illegal Case");
    }
    return 0;
    
}