#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  int i;
  char buf[200001];
  int one = 0, two = 0, three = 0, four = 0;
  int total = 0;

  scanf("%d\n", &i);
  fgets(buf, 200001, stdin);

  int len = strlen(buf) - 1;
  buf[len] = '\0';

  for (int j = 0; j < len; j += 2) {
    switch (buf[j]) {
      case '1':
        one++;
        break;
      case '2':
        two++;
        break;
      case '3':
        three++;
        break;
      case '4':
        four++;
        break;
    }
  }

  total += four;

  if (three >= one) {
    total += three;
    if (two % 2) {
      total += (two / 2) + 1;
    }
    else {
      total += (two / 2);
    }
  }
  else {
    total += three;
    one -= three;
    if (two % 2) {
      if (one > 3) {
        total += (two / 2) + 1;
        one -= 2;
        if (one % 4) {
          total += (one / 4) + 1;
        }
        else {
          total += (one / 4);
        }
      }
      else {
        total += (two / 2) + 1;
      }
    }
    else {
      total += (two / 2);
      if (one % 4) {
        total += (one / 4) + 1;
      }
      else {
        total += (one / 4);
      }
    }
  }

  printf("%d\n", total);

  return 0;
}
