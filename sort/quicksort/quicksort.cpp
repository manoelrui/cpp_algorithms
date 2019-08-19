#include <utility>
#include "quicksort.h"


int mr_algorithm::lomuto_partition(int* v, int start, int end) {
  int pivot = v[end];
  int i = start;
  for (int j = start; j < end; j++) {
    if (v[j] < pivot) {
      std::swap(v[i], v[j]);
      i++;
    }
  }
  std::swap(v[i], v[end]);
  return i;
}

void mr_algorithm::quicksort(int* v, int start, int end) {
  if (start < end) {
    int p = lomuto_partition(v, start, end);
    quicksort(v, start, p - 1);
    quicksort(v, p + 1, end);
  }
}
