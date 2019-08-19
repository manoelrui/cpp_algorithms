#include <iostream>
#include <algorithm>
#include "quicksort.h"


int main(int argc, char** argv) {
  int a[] = {3, 7, 8, 5, 2, 1, 9, 5, 4};
  int len = sizeof(a)/sizeof(a[0]);
  
  mr_algorithm::quicksort(a, 0, len - 1);

  std::for_each(a, a + len, [&a](int& i) {
    std::cout << i << " ";
  });

  return 0;
}
