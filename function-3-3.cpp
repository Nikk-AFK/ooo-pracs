#include <iostream>

double weighted_average(int array[], int n) {
  double w_avg = 0;
  double freq = 0;
  if (n < 1) {
    return 0;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (array[j] == array[i]) {
        freq++;
      }
    }
    w_avg = w_avg + (array[i] * (freq/n));
    freq = 0;
  }
  return w_avg;
}