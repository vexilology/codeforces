#include <iostream>

int main() {
  int a, b, f=0, s=0, t=0;
  std::cin >> a >> b;

  for (int i=1; i<7; ++i) {
    if (std::abs(a-i) < std::abs(b-i)) {
      f++;
    }
    else if (std::abs(a-i) > std::abs(b-i)) {
      t++;
    }
    else
      s++;
  }

  std::cout << f << " " << s << " " << t << std::endl;
  return 0;
}
