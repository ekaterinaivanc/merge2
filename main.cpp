#include "merge2.h"
#include <iostream>

int main()
{
  int a[] = {1, 2, 2, 3};
  int b[] = {2, 4, 4, 5};
  int c[10] = {0};

  int* res = merge(a, 4, b, 4, c, 10);
  for (int* p = c; p < res; ++p) {
    std::cout << *p << " ";
  }
  std::cout << "\n";
  return 0;
}
