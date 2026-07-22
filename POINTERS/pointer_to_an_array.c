#include <stdio.h>

//(*p)[5] means pointer to an array of 5 elements.
int main() {
  int arr[5] = {13,28,55,45,17};

int (*p)[5] = &arr; //p points to an whole array not to a single element.

    
    printf("%d\n",(*p)[0]);
    printf("%d\n",(*p)[2]);
    printf("%d\n",(*p)[4]);

    return 0;
}