#include "main.h"
#include "header/Test.h"

extern int test();

int main(void){
  printf("test start");
  test();
  printf("all finish");
  return 0;
}