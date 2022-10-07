#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void) {
  printf("args (6, 1, 2000): %d\n", day_of_year(6, 1, 2000));
  printf("args (6, 1, 2022): %d\n", day_of_year(6, 1, 2022));
  return 0;
}

int day_of_year(int month, int day, int year) {
  int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int counter = 0;

  // Add days in previous months to counter
  for (int i = 1; i < month; i++) {
    int prev_month = i - 1;
    counter += days_in_month[prev_month];
  }

  // Add days to counter
  counter += day;

  // Adjust for leap year
  int is_div_by_4 = year % 4 == 0;
  int is_div_by_100 = year % 100 == 0;
  int is_div_by_400 = year % 400 == 0;
  int is_leap_year = is_div_by_4 && (!is_div_by_100 || is_div_by_400);

  if (month > 2 && is_leap_year) {
    counter++;
  }

  return counter;
};
