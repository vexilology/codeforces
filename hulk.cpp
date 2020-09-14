#include <iostream>

int main() {
  int n;
  std::cin >> n;
  std::cout << "I hate";

  for (int i=2; i<=n; ++i) {
    std::cout << " that ";
    if (i%2)
      std::cout << "I hate";
    else
      std::cout << "I love";
  }

  std::cout << " it";
  return 0;
}
