#include <iostream>
#include <map>

int main() {
  std::map<std::string, std::string> m;
  int k;
  std::cin >> k;

  m["purple"] = "Power";
  m["green"] = "Time";
  m["blue"] = "Space";
  m["orange"] = "Soul";
  m["red"] = "Reality";
  m["yellow"] = "Mind";

  while (k--) {
    std::string x;
    std::cin >> x;
    m.erase(x);
  }

  std::cout << m.size() << std::endl;

  for (auto w = m.begin(); w != m.end(); ++w) {
    std::cout << (w->second) << std::endl;
  }

  return 0;
}
