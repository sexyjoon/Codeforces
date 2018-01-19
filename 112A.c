#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char buf1[102];
  char buf2[102];
  int len;

  fgets(buf1, 102, stdin);
  fgets(buf2, 102, stdin);

  len = strlen(buf1);
  buf1[len - 1] = '\0';
  buf2[len - 1] = '\0';

  for (int i = 0; i < len - 1; i++) {
    if (buf1[i] >= 65 && buf1[i] <= 90) {
      buf1[i] += 32;
    }
    if (buf2[i] >= 65 && buf2[i] <= 90) {
      buf2[i] += 32;
    }
    if (buf1[i] > buf2[i]) {
      printf("1\n");
      return 0;
    }
    else if (buf1[i] < buf2[i]) {
      printf("-1\n");
      return 0;
    }
  }
  printf("0\n");
  return 0;
}
