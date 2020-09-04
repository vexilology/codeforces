#include <iostream>

int main() {
  int w, qw = 0;
  std::string s;
  std::cin >> w;

  for (int i=0; i<w; ++i) {
    std::cin >> s;
    if (s[0] == '+' || s[2] == '+')
      qw++;

    if (s[0] == '-' || s[2] == '-')
      qw--;
  }

  std::cout << qw << std::endl;
  return 0;
}
