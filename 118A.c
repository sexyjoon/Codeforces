#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {

  char buf[100];
  scanf("%s\n", buf);
  int len = strlen(buf);

  for (int i = 0; i < len; i++) {
    if (buf[i] != 'A' && buf[i] != 'O' && buf[i] != 'Y' &&
        buf[i] != 'E' && buf[i] != 'U' && buf[i] != 'I' &&
        buf[i] != 'a' && buf[i] != 'o' && buf[i] != 'y' &&
        buf[i] != 'e' && buf[i] != 'u' && buf[i] != 'i') {
          if (buf[i] >= 65 && buf[i] <= 90) {
            printf(".%c", buf[i] + 32);
          }
          else {
            printf(".%c", buf[i]);
          }
        }
  }
  printf("\n");
  return 0;
}
