#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, k;
  int a[100] = {0, };
  int total = 0;
  scanf("%d %d", &n, &k);

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n; i++) {
    if (a[i] < a[k - 1] || a[i] == 0) {
      break;
    }
    total++;
  }
  printf("%d", total);
  return 0;
}
