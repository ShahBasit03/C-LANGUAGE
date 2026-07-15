#include <stdio.h>
#define PI 3.14191523
// float area(float r) {
//   return PI*r*r;
// }
#define area(r) (PI*r*r)
int main() {
  printf("%.10f\n",PI);
  printf("%f",area(5));
  return 0;
}