#include <iostream>

int main() {
  int n, w, b=1, mx=1;
  std::cin >> n >> w;

  for (int i=1; i<n; ++i) {
    int a;
    std::cin >> a;
    if (a > w)
      b++;
    else {
      mx = std::max(mx, b);
      b = 1;
    }
    w = a;
  }

  std::cout << std::max(mx, b) << std::endl;
  return 0;
}
