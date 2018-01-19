#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n;
  int buf[3] = {0, };
  int count = 0;
  int total = 0;

  scanf("%d\n", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d %d %d\n", &buf[0], &buf[1], &buf[2]);
    for (int j = 0; j < 3; j++) {
      if (buf[j] == 1) {
        count++;
      }
    }
    if (count >= 2) {
      total++;
    }
    count = 0;
  }
  printf("%d\n", total);

  return 0;
}
