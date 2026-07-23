//Swap Two Numbers Using Functions (Call-by-Value Method)

#include <stdio.h>
int temp;
void swap(int a,int b) {
  temp=a;
  a=b;
 b=temp;

  printf("\nInside Function:\n");
    printf("a = %d, b = %d\n", a, b);
  
}
int main(){
  int x,y;
  printf("enter your no.s");
  scanf("%d %d ",&x,&y);

  printf("\nBefore Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

  swap(x,y);

    printf("\nafter Swapping:\n");
    printf("x = %d, y = %d\n", x, y);


}