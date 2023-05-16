//Sample of bad code from https://www.geeksforgeeks.org/gdb-step-by-step-introduction

#include<stdio.h>
int main(){
  int x;
  int a = x;
  int b = x;
  int c = a + b;
  printf("this is a type %d\n", c);
  return 0;
}
