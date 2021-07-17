#include <iostream>

int n;
char c;
bool b = true;

int main() {
  std::cin >> n;

  while (n--) {
    std::cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' ||
        c == 'o' || c == 'u' || c == 'y') {
      if (b) {
        std::cout << c;
        b = false;
      }
    } else {
      std::cout << c;
      b = true;
    }
  }

  std::cout << std::endl;
  return 0;
}
