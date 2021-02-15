#include <iostream>

int main() {
  int n, k, q, w, ans=0;
  std::cin >> n >> k;

  for (int i=0; i<n; ++i) {
    std::cin >> q;
    w = 0;
    while (q>0) {
      if (q%10 == 4 || q%10 == 7)
        w++;
      q /= 10;
    }
    if (w<=k)
      ans++;
  }

  std::cout << ans << std::endl;
  return 0;
}
