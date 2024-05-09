#include <stdio.h>
int main()
{
    int row,c=1;

    printf("Enter number of row: ");
    scanf("%d",&row);

    for(int i=0; i<row; i++)
    {
        for(int blk=1; blk<=row-i; blk++)
        {
            printf("  ");
        }

        for(int j=0; j<=i; j++)
        {
            if (j==0||i==0)
            {
                c=1;
            }

            else
            {
                c=c*(i-j+1)/j;
            }

            printf("%4d",c);
        }
        printf("\n");
    }

    getch();
    return 0;
}
