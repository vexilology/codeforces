#include <iostream>

int main() {
  int t;
  std::cin >> t;

  for (int i=0; i<t; ++i) {
    int n;
    std::cin >> n;
    if (n==2) {
      std::cout << 2;
    }
    else if (n%2)
      std::cout << 1;
    else
      std::cout << 0;
    std::cout << std::endl;
  }

  return 0;
}
