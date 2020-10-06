#include <iostream>

int main() {
  int n, w;
  std::cin >> n >> w;

  for (int i=0; i<n; ++i) {
    if (i%2 == 0) {
      for (int j=0; j<w; ++j)
        std::cout << '#';
      std::cout << std::endl;
    } else if ((i+1) % 4 == 0) {
      std::cout << '#';
      for (int j=0; j<w-1; ++j)
        std::cout << '.';
      std::cout << std::endl;
    } else {
      for (int j=0; j<w-1; ++j)
        std::cout << '.';
      std::cout << '#' << std::endl;
    }
  }

  return 0;
}
