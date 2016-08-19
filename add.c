//author : https://www.github.com/finderskeepers

#include <stdio.h>

void k(void) {
  int x;
  *(&x + 2) -= 41;
}

int main(void) {
  int x;
  x = 0;
  if(x == 5) {
    return 0;
  }
  x++;
  printf("x = %d\n", x);
  k();
  x = 1;
  
  return 0;
}
