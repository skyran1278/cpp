#include "lib1.h"
#include <iostream>

int lib1::print_is_initialized() {
  std::cout << "lib1::is_initialized: " << is_initialized << std::endl;
  return 0;
}
