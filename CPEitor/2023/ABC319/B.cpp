#include <iostream>
using namespace std;
int n;
int main() {
  scanf("%d", &n);
  printf("%d", 1);
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= 9; ++j) {
      if (n % j == 0 && n / j <= i && i % (n / j) == 0) {
        printf("%d", j);
        goto next;
      }
    }
    printf("-");
  next:;
  }
  return 0;
}