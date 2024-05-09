#include<stdio.h>
int main()
{
    int n, mul = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n != 0)
    {
        int rem = n % 10;
        mul *= rem;
        n /=  10;
    }

    printf("Multiple of digits = %d", mul);

    getch ();
    return 0;
}
