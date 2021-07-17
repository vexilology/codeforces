#include <iostream>

const int MAXN = 107;

int n, a=0, b=0, c[MAXN];

int main() {
  std::cin >> n;

  for (int i=1; i<=n; ++i) {
    std::cin >> c[i];
    if (c[i] > 0)
      a++;
    if (c[i] < 0)
      b++;
  }

  if (2*a >= n)
    std::cout << "4" << std::endl;
  else if (2*b >= n)
    std::cout << "-4" << std::endl;
  else
    std::cout << "0" << std::endl;

  return 0;
}
