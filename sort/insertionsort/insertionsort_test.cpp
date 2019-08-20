#include <iostream>
#include <algorithm>
#include "insertionsort.h"


int main(int argc, char** argv) {
  int a[] = {12, 1, 0, 2, 5, 10, 3};
  int size = sizeof(a)/sizeof(a[0]);
  
  insertionsort(a, size);

  std::for_each(a, a + size, [&a](int& i) {
    std::cout << i << " ";
  });

  return 0;
}
