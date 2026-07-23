#include <stdio.h> 
int main () {
  int rows,cols,i,j;
  int m1[10][10],m2[10][10];

  
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);


  printf("Enter your matrix:");
    for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      scanf("%d",&m1[i][j]);
    }
  }

printf("your original matrix is:\n");
  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      printf("%d ",m1[i][j]);
      }
      printf("\n");
  }
  for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            m2[j][i] = m1[i][j];
        }
    }

  printf("Now the transpose of the matrix is :\n") ;
  for(i=0;i<cols;i++){
    for(j=0;j<rows;j++){
      printf("%d ",m2[i][j]);
      
    }
    printf("\n");

}

return 0;
}
