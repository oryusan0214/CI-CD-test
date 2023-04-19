#include <stdio.h>

int Increment_Test(int x,int y);
int Decrement_Dest(int x, int y);

int main (){
  int i;
  int count;
  int anser;
  
  count=10;
  for (i = 1; i <= count; i++)
  {
    anser += Increment_Test(1,1);
  }
  

  return 0;
}

int Increment_Test(int x,int y){
  return x+y;
}
int Decrement_Dest(int x, int y){
  return x-y;
}