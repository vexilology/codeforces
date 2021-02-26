#include <iostream>

int main() {
  int n;
  std::cin >> n;
  long long l[n], r[n], s=0, k=0;

  for (int i=0; i<=n-1; ++i) {
    std::cin >> l[i] >> r[i];
    if (l[i])
      s++;
    if (r[i])
      k++;
  }

  std::cout << std::min(s, n-s) + std::min(k, n-k) << std::endl;
  return 0;
}
