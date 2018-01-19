#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char buf[101];
  char flag;
  int count;

  fgets(buf, 101, stdin);
  buf[strlen(buf) - 1] = '\0';
  for (int i = 0; i < strlen(buf); i++) {
    if (buf[i] == flag) {
      count++;
    }
    else {
      flag = buf[i];
      count = 1;
    }

    if (count >= 7) {
      printf("YES\n");
      return 0;
    }
  }
  printf("NO\n");
  return 0;
}
