#include <stdio.h>
int add(int a ,int b){
  return a+b;
}
int main() {
  int a;
  printf("Enter your first no:");
  scanf("%d",&a);
  int b;
  printf("Enter your 2nd no:");
  scanf("%d",&b);
  int sum =add(a,b);
  printf("%d",sum);
  return 0;
} 