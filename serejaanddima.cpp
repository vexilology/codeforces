#include <iostream>

int main() {
  int w[200000];
  int n;
  int ans[2];

  scanf("%d", &n);
  for (int i=1; i<=n; ++i)
    scanf("%d", &w[i]);

  int l=1; int r=n;
  for (int i=1; i<=n; ++i) {
    if (w[l]>w[r])
      ans[i%2] += w[l++];
    else
      ans[i%2] += w[r--];
  }

  printf("%d %d\n", ans[1], ans[0]);
  return 0;
}
