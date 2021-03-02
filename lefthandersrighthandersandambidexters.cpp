#include <iostream>

int main() {
  int l, r, a;
  std::cin >> l >> r >> a;

  while (a>0) {
    if (l<r) {
      l++;
      a--;
    } else {
      r++;
      a--;
    }
  }

  std::cout << std::min(l, r) * 2 << std::endl;
  return 0;
}
