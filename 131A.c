#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  int len;
  char buf[102];

  fgets(buf, 102, stdin);
  len = strlen(buf) - 1;
  buf[len] = '\0';

  if (buf[0] >= 97 && buf[0] <= 122) {
    for (int i = 1; i < len; i++) {
      if (buf[i] >= 97 && buf[i] <= 122) {
        printf("%s\n", buf);
        return 0;
      }
    }
    buf[0] -= 32;
    for (int i = 1; i < len; i++) {
      buf[i] += 32;
    }
    printf("%s\n", buf);
    return 0;
  }
  else {
    for (int i = 1; i < len; i++) {
      if (buf[i] >= 97 && buf[i] <= 122) {
        printf("%s\n", buf);
        return 0;
      }
    }
    for (int i = 0; i < len; i++) {
      buf[i] += 32;
    }
    printf("%s\n", buf);
    return 0;
  }


  return 0;
}
