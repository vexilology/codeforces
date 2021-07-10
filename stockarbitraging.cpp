#include <iostream>

int buy = 1001;
int sel = -1;
int n, m, r, i, k;

int main() {
  std::cin >> n >> m >> r;

  while (n--) {
    std::cin >> k;
    buy = std::min(buy, k);
  }

  while (m--) {
    std::cin >> k;
    sel = std::max(sel, k);
  }

  sel = std::max(sel, buy);

  std::cout << (r/buy) * sel + (r%buy) << std::endl;
  return 0;
}
