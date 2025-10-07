#include<stdio.h>

int main(){
    int num[5];
    int max, min, sum=0;

    printf("Enter the 5 elements in an array : ");
    for(int i =0; i<5; i++){

        scanf("%d",&num[i]);
        if(i==0)
        max = min = num[i];

        if(max < num[i])
        max = num[i];

        if (min > num[i])
        min =num[i];

        sum +=num[i];
    }
    printf("entered array :\n");
    for(int i=0;i<5;i++){
        printf("%d ",num[i]);
    }
    printf("\n");

    printf("Maximum number from entered array: %d\n",max);
    printf("Minimum number from entered array: %d\n",min);
    printf("sum of numbers from entered array: %d\n",sum);

    return 0;
}