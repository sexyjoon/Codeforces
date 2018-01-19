#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  int n;
  char buf[5];
  int total = 0;
  scanf("%d\n", &n);

  for (int i = 0; i < n; i++) {
    fgets(buf, 5, stdin);
    buf[strlen(buf)-1] = '\0';
    if ((buf[0] == '+' && buf[1] == '+' && buf[2] == 'X') ||
        (buf[0] == 'X' && buf[1] == '+' && buf[2] == '+')) {
          total += 1;

    }
    else if ((buf[0] == '-' && buf[1] == '-' && buf[2] == 'X') ||
            (buf[0] == 'X' && buf[1] == '-' && buf[2] == '-')) {
                total -= 1;
    }

  }
  printf("%d\n", total);

  return 0;
}
