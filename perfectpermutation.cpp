#include <iostream>

int main() {
  int n;
  std::cin >> n;

  if (n%2 == 0) {
    for (int i=n; i>0; --i)
      std::cout << i << " ";
    std::cout << std::endl;
  }
  else
    std::cout << -1 << std::endl;

  return 0;
}
