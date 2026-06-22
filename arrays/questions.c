#include <stdio.h>
int main() {
  int marks[10]={87,23,45,54,32,87,13,24,96,43}; 
  for(int i=0;i<10;i++) {
    if(marks[i]<35) {
      printf("%d  ",i); //just write marks[i] in place of i if you want to get the marks.
    }
     } 
  return 0; 
}