#include <iostream>

int main() {
  int q, w;
  std::string s, a;
  std::cin >> q >> s >> a;

  if (a == "week")
    w = 52 + (q == 5 || q == 6);
  else
    w = 12 * (q <= 29) + 11 * (q == 30) + 7 * (q == 31);

  std::cout << w << std::endl;
  return 0;
}
