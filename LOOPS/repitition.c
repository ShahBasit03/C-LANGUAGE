#include <stdio.h>
int main()
{
  int num1,num2,count;
  for(count=1;count<=10;count++) {
    printf("Enter your first number and second number");
    scanf("%d %d",&num1,&num2);
    /*we can directly define mul first and then define mul= num1 * num2 
    it can also give the same result.*/
printf("The multiplication of two numbers is %d\n",num1 * num2);}
return 0;
}