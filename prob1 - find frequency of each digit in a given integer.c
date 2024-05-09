#include<stdio.h>
int main()
{
    int n,ctr;

    printf("Input any number: ");
    scanf("%d", &n);
    for ( int i = 0; i < 10; i++)
    {
        printf("The frequency of %d = ",i);
        ctr = 0;
        for (int j = n; j > 0; j = j / 10)
        {
            int r = j % 10;
            if (r == i)
            {
                ctr++;
            }
        }
        printf("%d \n",ctr);

    }

    getch ();
    return 0;
}
