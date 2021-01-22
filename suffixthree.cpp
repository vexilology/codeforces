#include <iostream>

int main() {
  int w;
  std::cin >> w;

  while (w--) {
    std::string s;
    std::cin >> s;
    if (s.back() == 'o')
      std::cout << "FILIPINO" << std::endl;
    if (s.back() == 'u')
      std::cout << "JAPANESE" << std::endl;
    if (s.back() == 'a')
      std::cout << "KOREAN" << std::endl;
  }

  return 0;
}
