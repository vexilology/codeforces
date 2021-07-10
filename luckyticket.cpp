#include <iostream>

int a, n;
bool f;

std::string w;

int main() {
  std::cin >> n >> w;

  for (int i=0; i<n; ++i) {
    if (w[i] != '7' && w[i] != '4')
      f = 1;
  }

  for (int i=0; i<n/2; ++i)
    a += w[i];

  for (int i=n/2; i<n; ++i)
    a -= w[i];

  if (f || a != 0)
    std::cout << "NO" << std::endl;
  else
    std::cout << "YES" << std::endl;

  return 0;
}
