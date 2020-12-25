#include <iostream>

int main() {
  std::string w, e;
  std::cin >> w >> e;
  int ans=0;

  for (int i=0; i<e.size(); ++i) {
    if (w[ans] == e[i])
      ans++;
  }

  std::cout << ans+1 << std::endl;
  return 0;
}
