#include "binarysearch.h"


int binarysearch(int e, int* a, int size) {
  int start = 0;
  int end = size - 1;
  while (end >= start) {
    int middle_index = start + (end - start) / 2;
    if (e < a[middle_index]) {
      end = middle_index - 1;
    } else if (e > a[middle_index]) {
      start = middle_index + 1;
    } else if (e == a[middle_index]) {
      return e;
    }
  }

  return -1;
}
