#include <iostream>

int main() {
  int n, t;
  std::cin >> n;
  std::string s, s1, s2;

  for (int i=0; i<n; ++i) {
    std::cin >> s1 >> s2 >> s;
    bool b = true;
    for (int j=0; j<s.size(); ++j)
      if (s1[j] != s[j] && s2[j] != s[j]) {
        std::cout << "NO";
        b = false;
        break;
      }
    if (b)
      std::cout << "YES";
    std::cout << std::endl;
  }

  return 0;
}
