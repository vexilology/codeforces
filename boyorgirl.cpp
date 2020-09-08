#include <iostream>

int main() {
  std::string w;
  std::cin >> w;

  for (int i=0; i<w.size(); ++i) {
    int q = w.find(w[i], i + 1);

    while (q + 1) {
      w.erase(w.begin() + q);
      q = w.find(w[i], i + 1);
    }
  }

  if (w.size() % 2)
    std::cout << "IGNORE HIM!" << std::endl;
  else
    std::cout << "CHAT WITH HER!" << std::endl;

  return 0;
}
