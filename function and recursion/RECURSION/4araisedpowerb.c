#include <stdio.h>
int power(int a, int b) {
  if (b==0) return 1;
  int recans=a*power(a,b-1);
  return recans; }
int main() {
int a;
printf("Enter yoyur no:");
scanf("%d",&a);
int b;
printf("Enter your power");
scanf("%d",&b);
int p=power(a,b);
printf("%d raised to power %d is %d",a,b,p);
return 0;
}
