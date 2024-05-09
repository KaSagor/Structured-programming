#include <stdio.h>
int main()

{
    int arr[20], *max, *min, n, i;  //pointer variables declared for max and min

    printf("Enter size: ");

    scanf("%d", &n);

    printf("Enter %d numbers: \n",n);

    for ( i = 0 ; i < n ; i++ )

        scanf("%d", &arr[i]);

    max  = arr; //maximum pointer will now point to the address of the first element

    min  = arr; //minimum pointer will now point to the address of the first element

    for (i = 0; i < n; i++)
    {

        //Finding the largest element in the array

        if (*(arr+i) > *max)
        {
            *max = *(arr+i);
        }
    }
    printf("Maximum =  %d\n", *max);


    for (i = 0; i < n; i++)
    {
        //Finding the smallest element in the array

        if (*(arr+i) < *min)
        {
            *min = *(arr+i);
        }
    }

    printf("Minimum = %d\n", *min);

    getch();
    return 0;

}
