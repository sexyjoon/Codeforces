#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char buf[101];
  int one = 0, two = 0, three = 0;

  scanf("%s", buf);

  int len = strlen(buf);

  for (int i = 0; i < len; i += 2) {
    if (buf[i] == '1') {
      one++;
    }
    else if (buf[i] == '2') {
      two++;
    }
    else {
      three++;
    }
  }
  for (int i = 0; i < len; i++) {
    if (!(i % 2)) {
      if (one != 0) {
        printf("1");
        one--;
      }
      else {
        if (two != 0) {
          printf("2");
          two--;
        }
        else {
          if (three != 0) {
            printf("3");
            three--;
          }
        }
      }
    }
    else {
      printf("+");
    }
  }
  return 0;
}
