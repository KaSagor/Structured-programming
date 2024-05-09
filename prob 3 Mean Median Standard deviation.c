#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, a[20] = {0}, sum = 0, n;
    float mean = 0.0, median = 0.0, SD, d, varsum = 0;

    printf("Enter limit: ");
    scanf("%d",&n);

    printf("Enter %d numbers\n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    mean = (float)sum/(float)n;
    printf("Mean = %.2f",mean);

    for(i=0; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                d = a[j];
                a[i] = a[j];
                a[j] = d;
            }
        }
    }
    if(n%2==0)
    {
        median = (float) (a[n/2] + a[(n-1)/2])/2;
    }
    else
    {
        median = a[(n-1)/2];
    }
    printf("\nMedian = %.2f",median);

    for(i=0; i<n; i++)
    {
        d = a[i] - mean;
        varsum = varsum + pow(d,2);
    }

    SD = sqrt(varsum / (float)n);

    printf("\nStandard deviation = %.2f", SD);

    getch ();
    return 0;
}
