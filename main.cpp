#include <iostream>
#include "src/hello.hpp"

int main() {
  // Testing the default behavior
  std::cout << "Standard: " << strcmp_case_insensitive("String one", "string one") << std::endl;

  // "my cool string" vs "mycoolstring" should return 0
  int result = strcmp_case_insensitive("my cool string", "mycoolstring", true);

  std::cout << "Skip Spaces Test: \"my cool string\" vs \"mycoolstring\" returns "
      << (result == 0 ? "Equal" : "Not Equal") << " " << std::endl;

  return 0;
}
