#include <stdio.h> 
int main () {
  int matrix[3][4] ={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}

  };

  printf("%d\n",matrix[1][2]); 
  printf("%d\n",(*(matrix+1))[2]); //it also gives 7 as output 
   printf("%d\n", *(*(matrix+1)+2));//it also gives 7.
   //first star means go to  row and then the 2nd star means go to column.

  //2nd row third column.
  printf("%p\n",matrix+2); //gives the adress of 3rd row

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

   printf("%d\n",*(matrix+1));

  return 0;
}