#include <iostream>

int main() {
  std::string w;
  std::cin >> w;

  if (w == "a8" || w == "a1" || w == "h8" || w == "h1")
    std::cout << 3 << std::endl;
  else if (w[0] == 'a' || w[0] == 'h' || w[1] == '8' || w[1] == '1')
    std::cout << 5 << std::endl;
  else
    std::cout << 8 << std::endl;

  return 0;
}
