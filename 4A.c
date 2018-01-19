#include <stdio.h>

int main() {
  int i;
  scanf("%d", &i);

  if (i == 2 | (i % 2) == 1) {
    printf("NO");
  }
  else {
    printf("YES");
  }
}
