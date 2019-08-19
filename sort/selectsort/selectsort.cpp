#include "selectsort.h"
#include <utility>


void selectsort(int* a, int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < size; j++) {
      if (a[j] < a[min_index]) {
        min_index = j;
      }
    }
    std::swap(a[i], a[min_index]);
  }
}
