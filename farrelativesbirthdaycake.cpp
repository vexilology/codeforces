#include <iostream>

std::string s[105];

int n, ans = 0;

int main() {
  std::cin >> n;

  for (int i=0; i<n; ++i)
    std::cin >> s[i];

  for (int i=0; i<n; ++i) {
    int a = 0;
    for (int j=0; j<n; ++j)
      if (s[i][j] == 'C')
        a++;
    ans += (a-1) * a/2;
    a = 0;
    for (int j=0; j<n; ++j)
      if (s[j][i] == 'C')
        a++;
    ans += (a-1) * a/2;
  }

  std::cout << ans << std::endl;
  return 0;
}
