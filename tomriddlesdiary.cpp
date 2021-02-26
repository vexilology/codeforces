#include <iostream>
#include <set>
#include <string>

int main() {
  int n;
  std::cin >> n;
  std::set<std::string> w;

  for (int i=0; i<n; ++i) {
    std::string s;
    std::cin >> s;
    std::cout << (w.insert(s).second ? "NO" : "YES") << std::endl;
  }

  return 0;
}
