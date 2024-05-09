#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter the Decimal number: ");
    scanf("%d",&n);

    printf("\nBinary of Decimal %d is: ",n);

    for(i=0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    for(i=i-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }

    getch();
    return 0;
}
