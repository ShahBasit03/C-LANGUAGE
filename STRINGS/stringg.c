#include <stdio.h>
int main (){
  // char arr[]="College wallah is best.\0";
  char str[50]="College wallah is best.\n ";
  // computer always adds /0 on its own and it includesas a character means it also counts.
  char arr[] ={'h','e','l','l','0','\0'} ; //in thhis way we have to mentyon the /0 separetly else it will show some error.
  int i=0;
  // while(str[i]!='\0'){
  //   printf("%c",str[i]); 
  //   i++;
  // }
  // printf("%c\n",str[6]);


  str[1]=98; //ascii value of b or we can directly use b.
 
  while(str[i]!='\0'){
    printf("%c",str[i]);  //you can write str/arr[i] or i[str] or *(arr/str + i) or *(i+arr/str) all  works same way 
    i++;
  }

return 0;
  
}