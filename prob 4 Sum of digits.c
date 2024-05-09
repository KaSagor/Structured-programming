#include <stdio.h>

int digit(int num);
int main()
{
    int n, sum;

    printf("Enter number: ");
    scanf("%d", &n);

    sum = digit(n);

    printf("Sum of digits of %d = %d", n, sum);

    return 0;
}

int digit(int num)
{
    if(num == 0)
        return 0;

    return ((num % 10) + digit(num / 10));
}
