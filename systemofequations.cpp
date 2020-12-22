#include <iostream>

int main() {
  int n, m, w=0;
  std::cin >> n >> m;

  for (int i=0; i<=32; ++i) {
    for (int j=0; j<=32; ++j)
      if (i*i+j == n && i+j*j == m)
        ++w;
  }

  std::cout << w << std::endl;
  return 0;
}
