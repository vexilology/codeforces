#include <iostream>

int main() {
  std::string w1, w2, w3;
  std::cin >> w1 >> w2 >> w3;
  w1 += w2;

  for (int i=0; i<w1.size(); ++i) {
    int pos = w3.find(w1[i]);
    if (pos + 1) {
      w3.erase(w3.begin() + pos);
      if (!w3.size()) {
        std::cout << "YES" << std::endl;
        return 0;
      }
      continue;
    }
    else {
      std::cout << "NO" << std::endl;
      return 0;
    }
  }

  if (w3.size())
    std::cout << "NO" << std::endl;
  else
    std::cout << "YES" << std::endl;
  return 0;
}
