#include <stdio.h>

#define NUM_OF_ALPHABET 26

int main(int argc, char const *argv[]) {

  int character_set = 0;
  int temp;
  char flag = 0;

  while ((temp = getchar()) != '\n') {
    character_set |= (0x01 << (temp - 97));
  }

  for (int i = 0; i < NUM_OF_ALPHABET; i++) {
    if ((character_set >> i) & 0x01) {
      flag ^= 1;
    }
  }

  if (flag) {
    printf("IGNORE HIM!\n");
  }
  else {
    printf("CHAT WITH HER!\n");
  }

  return 0;
}
