#include <iostream>

int main() {
  int n, w = 0;
  std::cin >> n;
  std::string s, s1;
  std::cin >> s >> s1;

  for (int i=0; i<s.size(); ++i) {
    int i1 = s[i]-48, i2 = s1[i]-48;
    if (i2 > i1)
      std::swap(i2, i1);
    w += std::min(abs(i1-i2), abs(9-i1)+i2+1);
  }

  std::cout << w << std::endl;
  return 0;
}
