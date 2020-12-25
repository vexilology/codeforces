#include <iostream>

int main() {
  int n, s1, s2, s3, a;
  s1 = s2 = s3;
  std::cin >> n;

  for (int i=1; i<=n; ++i) {
    std::cin >> a;
    if (i%3 == 1)
      s1 += a;
    else if (i%3 == 2)
      s2 += a;
    else
      s3 += a;
  }

  if (s1>s2 && s1>s3)
    std::cout << "chest" << std::endl;
  else if (s2>s1 && s2>s3)
    std::cout << "biceps" << std::endl;
  else
    std::cout << "back" << std::endl;

  return 0;
}
