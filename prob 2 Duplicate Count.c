#include<stdio.h>
int main()
{
    int arr[100];
    int i, j, n, count = 0;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n ; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("Duplicate Count: %d\n",count);

    getch ();
    return 0;
}
