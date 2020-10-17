#include <iostream>
#include <cmath>

int main() {
  int w, n;
  std::cin >> w;

  for (int i=0; i<w; ++i) {
    std::cin >> n;
    int s1 = pow(2, n);
    int s2 = 0;

    for (int i=1; i<n/2; ++i)
      s1 += pow(2, i);
    for (int i=n/2; i<n; ++i)
      s2 += pow(2, i);

    std::cout << abs(s2-s1) << std::endl;
  }

  return 0;
}
