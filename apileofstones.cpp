#include <iostream>

int n, w = 0;

int main() {
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    char x;
    std::cin >> x;
    if (x == '+')
      w++;
    else
      w = std::max(w-1, 0);
  }

  std::cout << w << std::endl;
  return 0;
}
