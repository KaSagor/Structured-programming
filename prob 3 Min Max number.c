#include <stdio.h>
int main()
{
    int a[100],i,n,min,max;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter %d numbers:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    min=max=a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("max number: %d",max);
    printf("\nmin number: %d",min);

    getch ();
    return 0;
}
