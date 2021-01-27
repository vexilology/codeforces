#include <iostream>
#include <algorithm>

int main() {
  int t, n;
  std::string s;
  std::cin >> t;

  while (t--) {
    std::cin >> s;
    n = s.size();
    std::string w = "Yes";
    std::sort(s.begin(), s.end());
    for (int i=1; i<n; ++i) {
      if (s[i] != s[i-1]+1)
        w = "No";
    }
    std::cout << w << std::endl;
  }

  return 0;
}
