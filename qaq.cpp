#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int a=0, b=0, c=0;

  for (int i=0; i<s.size(); ++i) {
    if (s[i] == 'Q') {
      c += b;
      a++;
    }
    if (s[i] == 'A') {
      b += a;
    }
  }

  std::cout << c << std::endl;
  return 0;
}
