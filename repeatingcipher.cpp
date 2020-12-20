#include <iostream>

int main() {
  int n, j=0, i;
  std::string s;
  std::cin >> n >> s;

  for (i=0; i<n; ++j, i+=j)
    std::cout << s[i];
  std::cout << std::endl;

  return 0;
}
