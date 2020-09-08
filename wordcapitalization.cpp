#include <iostream>

int main() {
  int i = 0;
  std::string w;
  std::cin >> w;

  w[i] = towupper(w[i]);
  std::cout << w << std::endl;

  return 0;
}
