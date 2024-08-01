#include "a.h"
#include "shared.h"

std::string a_from_lib_a() {
  return "a " + shared_from_lib_shared();
}
