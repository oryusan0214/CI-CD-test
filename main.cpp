//#include "main.h"
#include <stdio.h>
#include "Test.h"


extern int test(void);

int main(void){
  printf("test start\n");
  test();
  printf("all finish\n");
  return 0;
}
