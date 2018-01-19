#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  int i, j;
  char buf[100] = {0,};

  scanf("%d", &i);
  for (j = 0; j < i; j++) {
    scanf("%s\n", buf);
    int len = strlen(buf);
    if (len <= 10) {
      printf("%s\n", buf);
    }
    else {
      printf("%c%d%c\n", buf[0], len - 2, buf[len-1]);
    }
  }

  return 0;
}
