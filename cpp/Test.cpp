#include "header/System.h"



int Increment_Test(int x,int y);
int Decrement_Dest(int x, int y);

int test (){
  int i;
  int count;
  int anser;
  
  count=10;
  for (i = 1; i <= count; i++)
  {
    anser += Increment_Test(1,1);
  }
  
  printf("yoyoyoyoyoyoyoyoyo\n");

  return 0;
}

int Increment_Test(int x,int y){
  return x+y;
}
int Decrement_Test(int x, int y){
  return x-y;
}

//ここが追加したところだyo