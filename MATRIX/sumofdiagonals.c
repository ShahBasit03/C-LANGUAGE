#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    

     if(rows != cols)
    {
        printf("Diagonal elements exist only for a square matrix.");
        return 0;
    }
printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

   
    for(i = 0; i < rows; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}








