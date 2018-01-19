#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, curr = 0, total = 0;
  int a, b;

  scanf("%d\n", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);
    curr = curr - a + b;
    if (curr > total) {
      total = curr;
    }
  }

  printf("%d\n", total);

  return 0;
}
