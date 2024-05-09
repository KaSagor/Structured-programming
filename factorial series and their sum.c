#include<stdio.h>
int main()
{
    int n,limit;
    double fact = 1,sum = 0;

    printf("Enter Student ID: ");
    scanf("%d",&n);

    limit = n%16;

    if (0<=limit && limit<=5)
    {
        limit = limit+4;
    }

    printf("Limit = %d",limit);

    for(int i=1; i<=limit; i++)
    {
        fact = fact * i;
        sum = (1/fact)+sum;
    }

    printf("\nThe Sum of the series 1/1! + 1/2! + 1/3! ... + 1/%d! is = %lf\n",limit,sum);

    getch ();
    return 0;
}
