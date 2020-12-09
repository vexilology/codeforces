#include <iostream>

int main() {
  int n, k=0;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  int pos = s.find('n');

  while (pos + 1) {
    ++k;
    pos = s.find('n', pos+1);
  }

  for (int i=0; i<k; ++i) {
    std::cout << 1 << " ";
    std::cout << std::endl;
  }

  k = 0;
  pos = s.find('z');

  while (pos + 1) {
    ++k;
    pos = s.find('z', pos+1);
  }

  for (int i=0; i<k; ++i) {
    std::cout << 0 << " ";
    std::cout << std::endl;
  }

  return 0;
}
