#include<stdio.h>

int main()
{
    int i,j,rows,col,pos;
    int a1[10][10],a2[10][10],add[10][10];

    printf("Enter number of rows\n");
    scanf("%d",&rows);

    printf("Enter number of columns\n",pos);
    scanf("%d",&col);


//Taking input for 1st matrix


    printf("Enter Matrix 1\n");
    for(i=0; i<=rows-1; i++)
    {
        for(j=0; j<=col-1; j++)
        {
            scanf("%d",(*(a1+i)+j));
        }
    }


//Taking input for 2nd matrix


    printf("Enter Matrix 2\n");
    for(i=0; i<=rows-1; i++)
    {
        for(j=0; j<=col-1; j++)
        {
            scanf("%d",(*(a2+i)+j));
        }
    }


//Addition of matrix


    for(i=0; i<=rows-1; i++)
    {
        for(j=0; j<=col-1; j++)
        {
            *(*(add+i)+j)=*(*(a1+i)+j)+*(*(a2+i)+j);
        }
    }

    printf("Addition of above matrices is\n");
    for(i=0; i<=rows-1; i++)
    {
        for(j=0; j<=col-1; j++)
        {
            printf("%d\t",*(*(add+i)+j));
        }
        printf("\n");
    }
    return 0;
}
