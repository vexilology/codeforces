#include <iostream>

int main() {
  int n;
  std::cin >> n;

  std::cout << (n*n+1)/2 << std::endl;

  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      if ((i+j)%2)
        std::cout << '.';
      else
        std::cout << 'C';
    }
    std::cout << std::endl;
  }

  return 0;
}
