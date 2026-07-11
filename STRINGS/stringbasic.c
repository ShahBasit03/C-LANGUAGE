#include <stdio.h>
#include <string.h>
int main() {
  char arr[5]={'a','b','c','d','e'};
  //if you declare and give value at first then its not necessary to put a size inside it i.e; in arr[] but if you only declare it then you do have to put the sign in.
  printf("%c ",arr[2]);
  char ch ='0';
int x=(int)ch;
printf("%d ",x);

char null='\0';
printf("%d",null);  //null character and its ASCII value is 0.
//we can use it as a checkpoint to print other things using while(arr[i]!=\0)
  return 0;
   
}



//ASCII value of 1 is 49 and so on upto 9
//ASCII value for 0 is 48.