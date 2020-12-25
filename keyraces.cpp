#include <iostream>

int main() {
  int s, v1, v2, t1, t2;
  std::cin >> s >> v1 >> v2 >> t1 >> t2;
  int r1 = (s * v1) + t1 * 2;
  int r2 = (s * v2) + t2 * 2;

  if (r1<r2)
    std::cout << "First" << std::endl;
  else if (r1>r2)
    std::cout << "Second" << std::endl;
  else
    std::cout << "Friendship" << std::endl;

  return 0;
}
