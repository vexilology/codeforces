#include <iostream>

int main() {
  int w, n, m, s1=0, s2=0;
  std::cin >> w;

  for (int i=0; i<w; ++i) {
    std::cin >> n >> m;
    if (n>m)
      s1++;
    if (n<m)
      s2++;
  }

  if (s1>s2)
    std::cout << "Mishka" << std::endl;
  else if (s1<s2)
    std::cout << "Chris" << std::endl;
  else
    std::cout << "Friendship is magic!^^" << std::endl;

  return 0;
}
