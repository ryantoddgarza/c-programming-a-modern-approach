#include <stdio.h>

int gcd(int m, int n);

int main(void) {
  int a = 12;
  int b = 28;

  printf("GCD of %d and %d: %d\n", a, b, gcd(a, b));

  return 0;
}

int gcd(int m, int n) {
  int remainder = 0;

  while (n > 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  return m;
};
