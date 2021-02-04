#include <iostream>

int w = 1;

void solv() {
  int x;
  int y;
  int z;

  std::cin >> x >> y >> z;

  if (x-y-z > 0) {
    std::cout << "+" << std::endl;
  } else if (y-x-z > 0) {
    std::cout << "-" << std::endl;
  } else if (x-y == 0 && z == 0) {
    std::cout << 0 << std::endl;
  } else {
    std::cout << "?" << std::endl;
  }
}

int main() {
  for (int i=0; i<w; ++i) {
    solv();
  }

  return 0;
}
