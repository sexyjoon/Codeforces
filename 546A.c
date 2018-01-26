#include <stdio.h>

int main(int argc, char const *argv[]) {

  int k, n, w;
  int dollors_for_bananas = 0;

  scanf("%d %d %d", &k, &n, &w);

  for (int i = 1; i <= w; i++) {
    dollors_for_bananas += i;
  }

  dollors_for_bananas *= k;

  if (dollors_for_bananas > n) {
    printf("%d\n", dollors_for_bananas - n);
  }
  else {
    printf("0\n");
  }

  return 0;
}
