#include <iostream>

int main() {
  int w;
  std::cin >> w;

  if (w%5 == 0)
    std::cout << w/5 << std::endl;
  else
    std::cout << (w/5)+1 << std::endl;

  return 0;
}
