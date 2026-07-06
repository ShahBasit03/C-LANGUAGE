 #include <stdio.h>
 #include<string.h>
 int main() {
  typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];

  }pokemon;

  pokemon arr[3];
  arr[0].attack=100;
  arr[0].hp=50; 
  arr[0].speed=110;
  arr[0].tier='A';
  strcpy(arr[0].name,"Charizard");



  arr[1].hp=550;
  arr[1].speed=1110;
  arr[1].attack=1040;
  arr[1].tier='D';
    strcpy(arr[1].name,"MEWTO");




  arr[2].attack=180;
  arr[2].hp=200;
  arr[2].speed=130;
  arr[2].tier='S';
    strcpy(arr[2].name,"pokemii");



  for (int i=0;i< 3;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].attack);
    printf("%d\n",arr[i].hp);
    printf("%d\n",arr[i].speed);
    printf("%c\n",arr[i].tier);
   
    printf("\n");
  }
  
  return 0;
}