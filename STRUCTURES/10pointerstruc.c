#include <stdio.h>
#include <string.h>
//GLOBAL DECLARATION.
typedef struct pokemon {
  char name[15];
  int hp;
  int speed;
  int attack;
  char tier;
 } pokemon;


 

 int main() {
  pokemon pikachu; //memory ke andar daba create hogya jo iske alag alag attributes ko store kr skta hai.
  strcpy(pikachu.name,"PIKACHU");
  pikachu.hp=2000;
  pikachu.speed=234;
  pikachu.attack=600;
  pikachu.tier='A';

  

  pokemon* x=&pikachu; //mtlb aek box create hogya  jiska naam x hai aur &pikachu ka ntlb ismai ye store hogya.
  // mgr ab masla ye hai ki is dabbe mai konsa attribute store hoga kuki pikachu ke boht attributes hai ,toh pehla wala attribute store hota hai
  printf("%p\n",&pikachu.name);   //address ban gya iska.
  printf("%p\n",&pikachu.hp);   
  printf("%d\n",pikachu.hp);   
  printf("%p\n",&pikachu.speed);   
  printf("%p\n",&pikachu.attack); 
  printf("%p\n",&pikachu.tier); 
  

  printf("%p\n",x);


//to change value using adreess 
(*x).hp=70; //bracket lgana zaroori hai 
 // [ // instead of using (*x we can use x-> it acts the same way.)]
printf("%d",pikachu.hp);
return 0;

 }


 //when we run it you will see x and name will have same address






