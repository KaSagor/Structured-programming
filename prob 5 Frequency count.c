#include <stdio.h>
int main()
{
    int arr[20], freq[20];
    int n, i, j, count;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements in array:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

        freq[i] = -1;
    }

    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\n\n");

    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d frequency count %d times\n", arr[i], freq[i]);
        }
    }

    getch ();
    return 0;
}
