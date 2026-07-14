#include <stdio.h>
#include <string.h>
int main (){
  char str[]="College wallah";
  str[3]='d';
  printf("%s\n",str);
  // str="Physics wallah";  //i cant change the whole string like this.but i can change characterr by character.
  //in normal normialisation we can change individual character but not the entire streing.
  //but in pointer initializing we can modify entire string but not individual.
  
char* ptr= "College wallah";
ptr="physics wallah"; //mtlnb ab pointer uthkr physics wallah ke pass point krne lg gya (adress change krlia) isliye output b yehu mila ab
printf("%s",ptr);

  return 0;
}