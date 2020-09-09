#include <iostream>

int main() {
  std::string c = "";
  std::string s, w;
  std::cin >> s >> w;

  for (int i=s.size()-1; i>=0; --i) {
    c += s[i];
  }

  if (w == c)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;

  return 0;
}
