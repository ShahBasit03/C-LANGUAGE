#include <stdio.h> 
#include <string.h>
int main (){
  char str[40];
  puts("My name is Basit and im learning c");
  //its only used for strings.
  puts("KYA BAAT HAI");
  //automatically puts newline.
  char str2[30];
  scanf("%s",str2); //if you try to write more than one word as input it will only consider first word. //can also use scanf("%[^\n]s",str) to take whole sentence as input.

  
  getchar(); //it will consume the leftover \n line.means iske bina str3 ka input nhi depayega.
printf("your input was %s\n",str2);


char str3[100];
gets(str3);//can take entire sentenece as input.
printf("your  2nd input was : %s",str3);
  return 0;
}