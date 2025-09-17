#include<stdio.h>
#include<string.h>

int main(){
    char str1[50] = "Hello Shorya-";    /*desitination -> string where final result will be stored, contain 
                                       a valid string (ending with '\0') and having enough extra spaces*/   
    char str2[] = "Nice to meet you";  // source

    strcat(str1, str2); // add str2 at the end of str1
   
    printf("Combined string: %s\n", str1);
    return 0;
}