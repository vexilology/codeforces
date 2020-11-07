#include <iostream>

int main() {
  int t;
  std::cin >> t;

  for (int i=0; i<t; ++i) {
    int q, w;
    std::cin >> q >> w;
    if (w>0) {
      q++;
      std::cout << (24-q)*60+60-w << std::endl;
    }
    else {
      std::cout << (24-q)*60 << std::endl;
    }
  }

  return 0;
}
