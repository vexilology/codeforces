#include <iostream>

int main() {
  std::string w;
  std::cin >> w;

  if (w[0] > 65)
    w[0] -= 32;

  std::cout << w << std::endl;
  return 0;
}
