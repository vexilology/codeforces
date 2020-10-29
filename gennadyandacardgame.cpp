#include <iostream>

int main() {
  std::string n, w;
  std::cin >> n;
  bool b = false;

  for (int i=0; i<5; ++i) {
    std::cin >> w;
    if (n[0] == w[0] || n[1] == w[1])
     b = true;
  }

  if (b)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;

  return 0;
}
