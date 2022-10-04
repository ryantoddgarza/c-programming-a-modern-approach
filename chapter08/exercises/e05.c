int main(void) {
  int fib_numbers[40] = {0, 1};
  int fib_numbers_length = sizeof(fib_numbers) / sizeof(fib_numbers[0]);

  for (int i = 2; i < fib_numbers_length; i++) {
    fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
  }

  return 0;
}
