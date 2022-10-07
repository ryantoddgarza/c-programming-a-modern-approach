#include <stdio.h>

int check(int x, int y, int n);

int main(void) {
  printf("x and y are valid: %d\n", check(0, 1, 2));
  printf("x is less than 0: %d\n", check(-1, 1, 2));
  printf("y is less than 0: %d\n", check(1, -1, 2));
  printf("x is greater than n - 1: %d\n", check(2, 1, 2));
  printf("y is greater than n - 1: %d\n", check(1, 2, 2));

  return 0;
}

int check(int x, int y, int n) {
  return (x >= 0 && y >= 0 && x < n && y < n);
}
