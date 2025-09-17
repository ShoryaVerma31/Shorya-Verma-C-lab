#include <stdio.h>

int main()
{
    int n ;
    printf("Enter the value of integer n = ");
    scanf("%d", &n);

    double sq = 0;
    int even = n % 2;
    if(even == 0)
    {
        for(int i = 2 ; i<= n ;i +=2 )
        {
            sq = sq + (i*i);
        }
        printf("Sum of squares of even numbers between 2 and %d = %.0lf", n,sq);
    }
    else
    {
        for(int i = 2;i <= (n-1); i += 2)
        {
            sq += (i*i);
        }
        printf("Sum of squares of even numbers between 2 and %d = %.0lf",n, sq);
    }
    return 0;
}