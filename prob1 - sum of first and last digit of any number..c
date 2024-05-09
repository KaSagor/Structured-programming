#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    int n2 = n % 10; /*n2 for last number*/

    while(n >= 10)
    {
        n = n / 10;
    }
    int n1 = n; /*n1 for first number*/

    sum = n1 + n2;
    printf("Sum of %d + %d = %d",n1,n2,sum);

    getch ();
    return 0;
}
