#include "binarysearch.h"


int binary_search(int e, int* a, int size) {
  int start = 0;
  int end = size - 1;
  while (end >= start) {
    int middle_index = start + (end - start) / 2;
    if (e < a[middle_index]) {
      end = middle_index - 1;
    } else if (e > a[middle_index]) {
      start = middle_index + 1;
    } else {
      return e;
    }
  }

  return -1;
}

int binary_search_recursive(int e, int* a, int start, int end) {
  int middle_index = (start + end) / 2;
  if (start > end) return -1;
  
  if (e > a[middle_index]) {
    return binary_search_recursive(e, a, middle_index + 1, end);
  } else if (e < a[middle_index]) {
    return binary_search_recursive(e, a, start, middle_index - 1);
  } else if (e == a[middle_index]) {
    return e;
  } 
}
