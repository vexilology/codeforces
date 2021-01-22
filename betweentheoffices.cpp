#include <iostream>

int main() {
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  int k=0, k1=0;
  int w = s.find("SF");

  while (w+1) {
    w = s.find("SF", w+1);
    ++k;
  }

  w = s.find("FS");
  while (w+1) {
    w = s.find("FS", w+1);
    ++k1;
  }

  if (k > k1)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;

  return 0;
}
