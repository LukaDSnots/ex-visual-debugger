#include "utilities.hpp"

#include <set>
const std::set kPunctuationToRemove{',', '!'};

std::string CreateStringWithoutPunctuation(std::string str) {
  std::string str_no_punc;
  for (unsigned int i = 0; i < str.size(); ++i) {
    if (!kPunctuationToRemove.contains(str[i])) {
      str_no_punc.push_back(str[i]);
    } else {
      continue;
    }
  }
  return str_no_punc;
}