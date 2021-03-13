#include <iostream>

int main() {
  int w, h, w1, h1, w2, h2;
  std::cin >> w >> h >> w1 >> h1 >> w2 >> h2;

  while (h != 0) {
    w += h;
    if (h == h1)
      w -= w1;
    if (h == h2)
      w -= w2;
    if (w < 0)
      w = 0;
    h--;
  }

  std::cout << w << std::endl;
  return 0;
}
