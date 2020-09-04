#include <iostream>

int main() {
  int n;
  std::string w;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    std::cin >> w;

    if (w.size() > 10)
      std::cout << w[0] << w.size() - 2 << w[w.size() - 1] << std::endl;
    else
      std::cout << w << std::endl;
  }

  return 0;
}
