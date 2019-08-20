#include <iostream>
#include "binarysearch.h"


int main(int argc, char** argv) {
  int a[] = {1, 5, 7, 8, 9, 10, 11, 15, 20, 21, 22};
  std::cout << binarysearch(5, a, sizeof(a)/sizeof(a[0])) << std::endl;
  return 0;
}
