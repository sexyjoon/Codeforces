#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char buf[102];
  int len;

  fgets(buf, 102, stdin);

  len = strlen(buf) - 1;
  buf[len] = '\0';

  for (int i = 0; i < len; i++) {
    if (buf[i] == 'H' || buf[i] == 'Q' || buf[i] == '9') {
      printf("YES\n");
      return 0;
    }
  }

  printf("NO\n");
  return 0;
}
