#include <stdio.h>
#include <stdlib.h>
#include "stack_array_function.h"

int main(void) {
  // 理解??

  struct stack *s = (struct stack*)malloc(sizeof(struct stack));
  
  createEmptyStack(s);

  push(s, 10);
  push(s, 20);
  push(s, 30);
  push(s, 40);
  push(s, 50);
  push(s, 60);
  push(s, 70);
  push(s, 80);
  push(s, 90);
  push(s, 100);
  //push(s, 110);
  printfStack(s);
  pop(s);
  pop(s);
  pop(s);
  pop(s);
  pop(s);
  pop(s);
  pop(s);
  pop(s);
  pop(s);
  //pop(s);
  printfStack(s);


  return 0;
}