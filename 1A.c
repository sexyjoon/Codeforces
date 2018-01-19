#include <stdio.h>

int main(int argc, char const *argv[]) {

  unsigned long long m, n, a;
  unsigned long long x, y;
  scanf("%I64d  %I64d  %I64d ", &m, &n, &a);

  if (m % a != 0) {
    x = (m / a) + 1;
  }
  else {
    x = (m / a);
  }
  if (n % a != 0) {
    y = (n / a) + 1;
  }
  else {
    y = (n / a);
  }

  printf("%I64d ", x * y);

  return 0;
}
