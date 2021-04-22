#include <stdio.h>
#include <stdlib.h>
#include "stack_array_function.h"

int main(void) {
  
  struct stack *s = (struct stack*)malloc(sizeof(struct stack));
  // initialize top (index)
  createStack(s);

  push(s, 10);
  printfStack(s);
  push(s, 20);
  printfStack(s);
  push(s, 30);
  printfStack(s);
  push(s, 40);
  printfStack(s);
  push(s, 50);
  printfStack(s);
  push(s, 60);
  printfStack(s);
  push(s, 70);
  printfStack(s);
  push(s, 80);
  printfStack(s);
  push(s, 90);
  printfStack(s);
  push(s, 100);
  printfStack(s);
  push(s, 110);
  printfStack(s);
  printf("\nDo pop().\n======================\n");
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);
  pop(s);
  printfStack(s);

  return 0;
}