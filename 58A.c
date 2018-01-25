#include <stdio.h>
#include <string.h>

#define MAX_LETTER_LENGTH 100

int main(int argc, char const *argv[]) {

  char letters[MAX_LETTER_LENGTH];
  char *hello = "hello";
  int pos_letters = 0, pos_hello = 0, flag = 0;
  int temp;

  while((temp = getchar()) != '\n') {
    letters[pos_letters] = temp;
    pos_letters++;
  }
  for (int i = 0; i < pos_letters; i++) {
    if (hello[pos_hello] == letters[i]) {
      pos_hello++;
    }
    if (pos_hello > 4) {
      printf("YES\n");
      return 0;
    }
  }

  printf("NO\n");
  return 0;
}
