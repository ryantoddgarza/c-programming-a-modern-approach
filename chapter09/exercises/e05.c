#include <math.h>
#include <stdio.h>

int num_digits(int n);

int main(void) {
  for (int i = 0; i < 10; i++) {
    int n = pow(10, i);
    printf("%d has %d digits\n", n, num_digits(n));
  }

  return 0;
}

int num_digits(int n) {
  int digits = 0;

  while (n > 0) {
    digits++;
    n /= 10;
  }

  return digits;
};
