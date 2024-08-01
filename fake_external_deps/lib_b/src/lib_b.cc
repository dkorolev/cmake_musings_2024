#include "b.h"
#include "shared.h"

std::string b_from_lib_b() {
  return "b " + shared_from_lib_shared();
}
