#include <iostream>

int main() {
  int n, m, i, l, r;
  std::string s;
  char c1, c2;
  std::cin >> n >> m;
  std::cin >> s;

  while (m--) {
    std::cin >> l >> r >> c1 >> c2;
    --l;
    --r;
    for (int i=l; i<=r; ++i) {
      if (s[i] == c1)
        s[i] = c2;
    }
  }

  std::cout << s << std::endl;
  return 0;
}
