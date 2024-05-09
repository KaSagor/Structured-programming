#include <stdio.h>
int main()
{

    int i, j, k;
    int matrixA[10][10]; // initialized at 10 just to have it initialized
    int matrixB[10][10];
    int result[10][10];
    int rowA, colA;
    int rowB, colB;
    int operation;//for swtich statements
    char again = 'Y';
    int sum = 0;

    while (again == 'Y')
    {
                printf("\t\tWelcome to Matrix calculator\n");
                printf("*******************************************************\n");


        printf("\nOperation Menu\n");
        printf("\t1. to Addition\n");
        printf("\t2. to Subtraction\n");
        printf("\t3. to Multiplication\n");
        printf("\t4. to Transpose\n");
        printf("\nEnter your choice: ");
        scanf(" %d", &operation);


        switch (operation)
        {

        //addition
        case 1:
            printf("\n\t*****You choice Matrix addition******");
            printf("\n**********************************************************");

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

            for (i=0; i<rowA; i++)
            {
                for (j=0; j<colA; j++)
                {
                    result[i][j] = matrixA[i][j] + matrixB[i][j];
                }
            }

            printf("[A+B]= \n");

            for (i=0; i<rowA; i++)
            {
                for (j=0; j<colA; j++)
                {
                    printf("\t%d ", result[i][j]);
                }
                printf("\n");
            }

            break;

        //subtraction
        case 2:
            printf("\n\t*****You choice Matrix subtraction******");
            printf("\n**********************************************************");

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

            break;

        //multiplication
        case 3:
            printf("\n\t*****You choice Matrix multiplication******");
            printf("\n**********************************************************");

            printf("\n\nEnter Row for Matrix A: ");
            scanf("%d", &rowA);

            printf("Enter Column for Matrix A: ");
            scanf("%d", &colA);

            printf("\nEnter Row for Matrix B: ");
            scanf("%d", &rowB);

            printf("Enter Column for Matrix B: ");
            scanf("%d", &colB);

            while(colA!=rowB)
            {
                printf ("\n\nError!!! try again\n\n");

                printf("Enter Row Matrix A: ");
                scanf("%d", &rowA);

                printf("Enter Column for Matrix A: ");
                scanf("%d", &colA);

                printf("\nEnter Row for Matrix B: ");
                scanf("%d", &rowB);

                printf("Enter Column for Matrix B: ");
                scanf("%d", &colB);
            }

            printf("\nEnter elements for Matrix A\n");
            for(i=0; i<rowA; i++)
            {
                for(j=0; j<colA; j++)
                {
                    printf("A[%d][%d]= ",i,j);
                    scanf("%d", &matrixA[i][j]);
                }
            }

            printf("\nEnter elements for Matrix B\n");

            for(i=0; i<rowB; i++)
            {
                for(j=0; j<colB; j++)
                {
                    printf("B[%d][%d]= ",i,j);
                    scanf("%d", &matrixB[i][j]);
                }
            }

            for(i=0; i<rowA; i++)
            {
                for(j=0; j<colB; j++)
                {
                    for(k=0; k<colA; k++)
                    {
                        sum = sum + matrixA[i][k]*matrixB[k][j];
                    }

                    result[i][j] = sum;
                    sum = 0;
                }
            }

            printf("\n\n[A]= \n");

            for(i=0; i<rowA; i++)
            {
                for(j=0; j<colA; j++)
                {
                    printf("\t");
                    printf("%d ", matrixA[i][j]);
                }
                printf("\n");
            }

            printf("\n\n[B]= \n");
            for(i=0; i<rowB; i++)
            {
                for(j=0; j<colB; j++)
                {
                    printf("\t");
                    printf("%d ", matrixB[i][j]);
                }
                printf("\n");
            }

            printf("\n\n[A*B]= \n");
            for(i=0; i<rowA; i++)
            {
                for(j=0; j<colB; j++)
                {
                    printf("\t");
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }

            break;

        //transpose
        case 4:

            printf("\n\t*****You choice transpose of Matrix******");
            printf("\n**********************************************************");

            printf("\n\nEnter Row number for A matrix: ");
            scanf("%d", &rowA);

            printf("\nEnter Column number for A matrix: ");
            scanf("%d", &colA);

            printf("\n\n");

            for(i=0; i<rowA; i++)
            {
                for(j=0; j<colA; j++)
                {
                    printf("\A[%d][%d]=",i,j);
                    scanf("%d",&matrixA[i][j]);
                }
            }

            printf("\n[A]=\n");
            for(i=0; i<rowA; i++)
            {
                for(j=0; j<colA; j++)
                {
                    matrixB[j][i]=matrixA[i][j];
                }
            }

            for(i=0; i<rowA; i++)
            {
                printf("\t");
                for(j=0; j<colA; j++)
                {
                    printf("\t%d ",matrixA[i][j]);
                }
                printf("\n");
            }

            printf("\n\nTranspose of [A]= \n");

            for(i=0; i<colA; i++)
            {
                printf("\t");
                for(j=0; j<rowA; j++)
                {
                    printf("\t%d ",matrixB[i][j]);
                }
                printf("\n");
            }

            break;

        default:

            printf("\nIncorrect option! Please choose the correct option.");
            break;
        }

        printf("\n\nDo you want to calculate again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }

    printf("\n\nThank you for using my calculator!\n\n");

    getch ();
    return 0;
}
