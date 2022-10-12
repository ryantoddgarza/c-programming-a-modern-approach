#include <math.h>
#include <stdio.h>

int digit(int n, int k);

int main(void) {
  int num = 80462;

  for (int i = 1; i <= 5; i++) {
    printf("Digit %d (from right) in %d: %d\n", i, num, digit(num, i));
  }

  return 0;
}

int digit(int n, int k) {
  for (int i = 1; i < k; i++) {
    n /= 10;
  }

  return n % 10;
};
