#include <iostream>

int main() {
  int w, a, b, sum=0, k=0;
  std::cin >> w;

  for (int i=0; i<w; ++i) {
    std::cin >> a >> b;
    sum = (a + k) - b;
    if (sum < 0)
      k = 0;
    else
      k = sum;
  }

  std::cout << sum << std::endl;
  return 0;
}
