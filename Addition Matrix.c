#include<stdio.h>
int main()
{
    int i,j, row, col;
    int A[10][10];
    int B[10][10];
    int C[10][10];

    printf("Enter number of Row for A matrix: ");
    scanf("%d", &row);

    printf("Enter number of Column for A matrix: ");
    scanf("%d", &col);

    printf("\n\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("\A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    printf("Enter number of Row for B matrix: ");
    scanf("%d", &row);

    printf("Enter number of Column for B matrix: ");
    scanf("%d", &col);

    printf("\n\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    // print A Matrix
    printf("[A]= \n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("\t%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    // print B Matrix
    printf("[B]= \n");

    for (i=0; i<row; i++)

    {
        for (j=0; j<col; j++)
        {
            printf("\t%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    // doing A+B
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // print A+B Matrix
    printf("[A+B]= \n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("\t%d ", C[i][j]);
        }
        printf("\n");
    }



}

