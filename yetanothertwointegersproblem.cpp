#include <iostream>
#include <cmath>

int main() {
  long long w, a, b;
  std::cin >> w;

  while (w--) {
    std::cin >> a >> b;
    long long s = ceil(abs(a-b)/10.);
    std::cout << s << std::endl;
  }

  return 0;
}
