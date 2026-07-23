//find the sum of two matrices.
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows!=cols) {
      printf("for addition the matrix must be of same dimension");
    }

    printf("Enter first matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The sum of m1 and m2 is:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];

            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    // printf("\nSum Matrix:\n");

    // for(i = 0; i < rows; i++)
    // {
    //     for(j = 0; j < cols; j++)
    //     {
    //         printf("%d ", c[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}