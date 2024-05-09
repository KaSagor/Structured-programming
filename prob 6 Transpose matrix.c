#include<stdio.h>
int main()
{
    int A[10][10],t[10][10],row,col,i,j;
    printf("Enter row: ");
    scanf("%d",&row);

    printf("Enter column: ");
    scanf("%d",&col);

    printf("\n\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("\A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\n[A]=\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            t[j][i]=A[i][j];

        }
    }

    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTranspose of [A]= \n");
    for(i=0; i<col; i++)
    {
        printf("\t");
        for(j=0; j<row; j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }

    getch ();
    return 0;

}

