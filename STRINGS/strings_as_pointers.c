#include <stdio.h>
#include <string.h>
int main() {
  char str[]="College wallah";
  char *ptr="College wallah"; 
//line 4 and 5 means same thing just different way .

  // char* ptr =&str[0]; //means we  stored the adreess of str[0] that is C in our string college wallah
  char* ptr =str; //ptr now points to str[0]
  printf("%p\n",&str[0]); //both will get the same adreess as str directly will provide address of 0th element
  printf("%p\n",str);

//to print the string using pointers
  int i=0;
  while(*ptr !='\0'){
    printf("%c",*ptr);//means ye pointer jis adress ko point kr rha hai waha ka character utha ke lao.
    ptr++;
    i++;
  }
}