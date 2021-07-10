#include <iostream>

int n, k, p;

std::string s;

int main() {
  std::cin >> n >> k >> s;

  for (int i=0; i<n; ++i)
    if (s[i] == 'G')
      p = i;

  for (int i=p; i<n; i+=k) {
    if (s[i] == '#')
      i = n;
    else if (s[i] == 'T') {
      std::cout << "YES" << std::endl;
      return 0;
    }
  }

  for (int i=p; i>=0; i-=k) {
    if (s[i] == '#')
      i = 0;
    else if (s[i] == 'T') {
      std::cout << "YES" << std::endl;
      return 0;
    }
  }

  std::cout << "NO" << std::endl;
  return 0;
}
