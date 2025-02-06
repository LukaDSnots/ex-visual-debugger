#include <iostream>
#include <string>

#include "utilities.hpp"

int main() {
  std::string howdy_world("Howdy, World!");
  std::string howdy_world_no_punc = CreateStringWithoutPunctuation(howdy_world);
  std::cout << howdy_world_no_punc << std::endl;
}