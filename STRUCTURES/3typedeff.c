#include <stdio.h>  
typedef float lala;   //it just mean we can use lala as float.It is our own choice whuich datatpe do we want to give some name or anything else.Means typedeff converts oldname into newname and computer knows oldname so it works.
#include <string.h>
// int main() {
// int x;
// lala y= 3.1415;
// printf("%f",y);
//   return 0;}



  //example of how ti use i tin structures.
  int main() {
  typedef struct book{
    char name[50];
    int pages;
    float price;
}bk;

//now we can make objects jusst using bk a; bk b;  bk c; 