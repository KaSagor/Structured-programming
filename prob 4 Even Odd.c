#include<stdio.h>
int main()
{
    int n,i, a[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Even numbers: \n");
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            printf("%d ", a[i]);
    }

    printf("\nOdd numbers: \n");
    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
            printf("%d ", a[i]);
    }

    getch();
    return 0;
}
