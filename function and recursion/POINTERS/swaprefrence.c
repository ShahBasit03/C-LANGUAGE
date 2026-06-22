#include <stdio.h>
void swap(int* x,int* y){
  int temp;
  temp=*x; //means aap x mai jao waha jis varibale ka adress store krke hai us varible ka value lekar aao.
  *x =*y; //is line sey hi directly value change hoti hai jaise a=b mai a ki value b ban jaati hai.
*y=temp;
return;

}
int main() {

 int a;
  printf("Enter your no.");
  scanf("%d",&a);

  int b;
  printf("Enter your no."); 
  scanf("%d",&b);

  swap(&a,&b);  //pass adress
  printf("The value of a is %d\n",a);
printf("The value of b is %d",b);


return 0;
}