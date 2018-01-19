#include <stdio.h>

int main(int argc, char const *argv[]) {

  int buf[5][5];
  int total = 0;

  for (int i = 0; i < 5; i++) {
    scanf("%d %d %d %d %d", &buf[i][0], &buf[i][1], &buf[i][2], &buf[i][3], &buf[i][4]);
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (buf[i][j] == 1) {
        if (i > 2) {
          total += (i - 2);
        }
        else {
          total += (2 - i);
        }
        if (j > 2) {
          total += (j - 2);
        }
        else {
          total += (2 - j);
        }
        printf("%d\n", total);
        return 0;
      }
    }
  }

  return 0;
}
