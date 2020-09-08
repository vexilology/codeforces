#include <iostream>

int main() {
  int low = 0, down = 0;
  std::string w;
  std::cin >> w;

  for (int i=0; i<w.size(); ++i) {
    if (w[i] >= 'a')
      ++low;
    else
      ++down;
  }

  if (down > low) {
    for (int i=0; i<w.size(); ++i)
      if (w[i] >= 'a')
        w[i] -= 32;
  } else {
    for (int i=0; i<w.size(); ++i)
      if (w[i] >= 'A' && w[i] <= 'Z')
        w[i] += 32;
  }

  std::cout << w << std::endl;
  return 0;
}
