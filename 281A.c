#include <stdio.h>

int main(int argc, char const *argv[]) {

  char buf[1000];

  scanf("%s", buf);

  if (buf[0] >= 97 && buf[0] <= 122) {
    buf[0] -= 32;
  }

  printf("%s\n", buf);

  return 0;
}
