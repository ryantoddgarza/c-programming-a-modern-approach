#include <stdio.h>

int main(void) {
  int temperature_readings[30][24] = {
      {2400},
      {2400},
      {2400},
  }; // Calculated average should be `10.0`
  float monthly_sum = 0.0f;
  float monthly_avg = 0.0f;

  for (int day = 0; day < 30; day++) {
    float daily_sum = 0.0f;
    float daily_avg = 0.0f;

    for (int hour = 0; hour < 24; hour++) {
      daily_sum += temperature_readings[day][hour];
    }

    daily_avg = daily_sum / 24;
    monthly_sum += daily_avg;
  }

  monthly_avg = monthly_sum / 30;
  printf("Monthly average: %.1f\n", monthly_avg);

  return 0;
}
