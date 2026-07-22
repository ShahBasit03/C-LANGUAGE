#include <stdio.h>
int main() {
  int x=10;

int *p=&x;

int **q=&p;

**q=50;
printf("%d",x);

printf("\n");


int z = 10;

int *y = &z;

printf("%d\n", z);

*y = 50;

printf("%d\n", z);

z = 80;

printf("%d\n", *y);
}