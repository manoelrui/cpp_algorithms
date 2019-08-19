#include <iostream>
#include <algorithm>
#include "selectsort.h"


int main(int argc, char** argv) {
  int a[] = {11, 25, 12, 22, 64};
  int size = sizeof(a)/sizeof(a[0]);
  
  selectsort(a, size);

  std::for_each(a, a + size, [&a](int& i) {
    std::cout << i << " ";
  });

  return 0;
}
