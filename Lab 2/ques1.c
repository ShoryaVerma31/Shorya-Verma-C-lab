#include<stdio.h>

int main(){
    int length, width;
    printf("enter length\n");
    scanf("%d",&length);
    printf("enter width\n");
    scanf("%d",&width);

    int out1=length/3;
    int out2=width/2;
    float out3=length/3.0;
    int out4=length/width;
    
    printf("outputs are %d %d %f %d %d\n",out1,out2,out3,out4,(width+length)/length > length/width );
    return 0;
}