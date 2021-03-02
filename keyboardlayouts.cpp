#include <iostream>

int main() {
  std::string a, b, c;
  std::cin >> a >> b >> c;

  for (int i=0; i<c.length(); ++i) {
    if (c[i]<59) {
      std::cout << c[i];
      continue;
    }

    for (int j=0; j<26; ++j) {
      if (c[i] == a[j])
        std::cout << b[j];
      if (c[i] == a[j]-32)
        std::cout << char(b[j]-32);
    }
  }

  std::cout << std::endl;
  return 0;
}
