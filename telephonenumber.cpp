#include <iostream>

int main() {
  int t, n;
  std::string s;
  std::cin >> t;

  while(t--) {
    bool b = false;
    std::cin >> n >> s;
    for (int i=0; i<n-10; ++i)
      if (s[i] == '8')
        b = true;
    puts(b ? "YES" : "NO");
  }

  return 0;
}
