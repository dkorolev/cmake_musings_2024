#include <iostream>

#include "a.h"
#include "b.h"

int main() {
  std::cout << a_from_lib_a() << std::endl;
  std::cout << b_from_lib_b() << std::endl;
}
