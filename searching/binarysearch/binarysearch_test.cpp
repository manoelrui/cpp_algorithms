#include <iostream>
#include "binarysearch.h"


int main(int argc, char** argv) {
  int a[] = {1, 5, 7, 8, 9, 10, 11, 15, 20, 21, 22};
  std::cout << binary_search(5, a, sizeof(a)/sizeof(a[0])) << std::endl;
  std::cout << binary_search_recursive(21, a, 0, sizeof(a)/sizeof(a[0]) - 1) << std::endl;  
  return 0;
}
