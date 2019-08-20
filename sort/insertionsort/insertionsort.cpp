#include "insertionsort.h"
#include <utility>


void insertionsort(int* a, int size) {
  for (int i = 0; i < size; i++) {
    int j = i;
    while (j > 0 && a[j-1] > a[j]) {
      std::swap(a[j-1], a[j]);
      j--;
    }
  }
}
