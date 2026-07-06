#include <stdio.h>
#include <stdbool.h>
int main() {
  typedef struct date{
    int day;
    int month;
    int year;
  }date;

  date a,b;
  a.day=14 ;
  a.month=12;
   a.year=2005;

   b.day=14;
  b.month=12;
   b.year=2005;


  //  if(a==b) printf("The dates are same");
  //  else printf("The dates are not same")
  //we cant do this bcoz we cant  compare user defined  values directly 
   
  //WE CAN USE THIS TO COMPARE SEPAREATE ELEMENTS ONE BY ONE AND THEN ANSWER IT.

  bool flag = true; 

  if(a.day!=b.day) flag = false;
  if(a.month!=b.month) flag = false;
  if(a.year!=b.year) flag = false;

  if(flag==true) printf("The dates are same");
  else printf("The dates are different");
  return 0;

}