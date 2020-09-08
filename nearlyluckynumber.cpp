#include <iostream>

int main() {
  long long k = 0;
  std::string n;
  std::cin >> n;

  int pos = n.find_first_of("47");
  while (pos+1) {
    ++k;
    pos = n.find_first_of("47", pos+1);
  }

  if (!k) {
    std::cout << "NO" << std::endl;
    return 0;
  }

  while (k) {
    if (k%10 != 7 && k%10 != 4) {
      std::cout << "NO" << std::endl;
      return 0;
    }

    k /= 10;
  }

  std::cout << "YES" << std::endl;
  return 0;
}
