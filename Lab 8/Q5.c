#include <stdio.h>

enum Weekday { MON = 1, TUE, WED, THU, FRI, SAT, SUN }; 
//enum (enumeration) in C is a user-defined data type,if we do not assign MON=1 by default it will start with 0)

int main() {
    int num;
    enum Weekday day;

    printf("Enter a number (1-7): ");
    scanf("%d", &num);

    if (num < 1 || num > 7) {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
        return 0;
    }

    day = num;  

    switch(day) {
        case MON:
            printf("Day: Monday\nIt's a weekday.\n");
            break;
        case TUE:
            printf("Day: Tuesday\nIt's a weekday.\n");
            break;
        case WED:
            printf("Day: Wednesday\nIt's a weekday.\n");
            break;
        case THU:
            printf("Day: Thursday\nIt's a weekday.\n");
            break;
        case FRI:
            printf("Day: Friday\nIt's a weekday.\n");
            break;
        case SAT:
            printf("Day: Saturday\nIt's a weekend.\n");
            break;
        case SUN:
            printf("Day: Sunday\nIt's a weekend.\n");
            break;
    }

    return 0;
}
