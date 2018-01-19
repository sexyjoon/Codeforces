#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  int n;
  char buf[52];
  char temp;
  int total = 0;

  scanf("%d\n", &n);
  fgets(buf, 52, stdin);

  buf[strlen(buf) - 1] = '\0';

  temp = buf[0];

  for (int i = 1; i < n; i++) {
    if (temp == buf[i]) {
      total++;
    }
    temp = buf[i];
  }

  printf("%d\n", total);

  return 0;
}
