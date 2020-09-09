#include <iostream>

int main() {
  int n, a = 0, d = 0;
  std::string s;
  std::cin >> n >> s;
  int q = s.find('A');
  int w = s.find('D');

  while (q + 1) {
    ++a;
    q = s.find('A', q + 1);
  }

  while (w + 1) {
    ++d;
    w = s.find('D', w + 1);
  }

  if (a > d)
    std::cout << "Anton" << std::endl;
  else if (a < d)
    std::cout << "Danik" << std::endl;
  else
    std::cout << "Friendship" << std::endl;

  return 0;
}
