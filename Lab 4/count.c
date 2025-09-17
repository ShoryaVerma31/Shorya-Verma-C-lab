#include<stdio.h>

int main(){
    int num, pos =0, neg =0, zero=0, choice;
    do {
        printf("enter a num : ");
        scanf("%d", &num);
        if (num>0)
          pos++;
        else if (num < 0)
          neg++;
        else 
        zero++; 
        printf("Do you want to another number? (1 for Yes, 0 for No):");
        scanf("%d", choice);  
    } while (choice == 1);
    
    printf("%d\n",pos);
    printf("%d\n",neg);
    printf("%d\n",zero);
    getchar();
    getchar();
    return 0;
}