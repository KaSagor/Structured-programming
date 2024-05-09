#include <stdio.h>
int main()
{
    int rowA, colA, i, j, matrixA[10][10], matrixB[10][10], result[10][10];

    printf("\n\nEnter Row number for A matrix: ");
    scanf("%d", &rowA);

    printf("\nEnter Column number for A matrix: ");
    scanf("%d", &colA);

    printf("\n\n");
    for (i=0; i<rowA; i++)
    {
        for (j=0; j<colA; j++)
        {
            printf("\A[%d][%d] = ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");


    printf("Enter Row number for B matrix: ");
    scanf("%d", &rowA);

    printf("\nEnter Column number for B matrix: ");
    scanf("%d", &colA);

    printf("\n\n");

    for (i=0; i<rowA; i++)
    {
        for (j=0; j<colA; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
        printf("\n");
    }
    printf("[A]= \n");

    for (i=0; i<rowA; i++)
    {
        for (j=0; j<colA; j++)
        {
            printf("\t%d ", matrixA[i][j]);
        }
        printf("\n");
    }
    printf("[B]= \n");

    for (i=0; i<rowA; i++)

    {
        for (j=0; j<colA; j++)
        {
            printf("\t%d ", matrixB[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("[A-B]= \n");

    for (i = 0; i < rowA; i++)
    {
        for (j = 0; j < colA; j++)
        {
            result[i][j] = matrixA[i][j] - matrixB[i][j];
            printf("\t%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
