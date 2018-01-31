#include <stdio.h>

void add_and_carry(char *number);
int is_distinct_digits(char *number);

int main(int argc, char const *argv[]) {

  char year[4];

  scanf("%s", year);

  do {

    add_and_carry(&year[3]);

  } while (!is_distinct_digits(year));

  printf("%s\n", year);

  return 0;
}

void add_and_carry(char *number) {

  if (*number == '9') {
    *number = '0';
    add_and_carry((char *)(number - sizeof(char)));
  }
  else {
    *number += 1;
  }

}

int is_distinct_digits(char *number) {

  if (number[0] != number[1] && number[0] != number[2] && number[0] != number[3] &&
      number[1] != number[2] && number[1] != number[3] &&
      number[2] != number[3]) {
    return 1;
  }
  else {
    return 0;
  }
}
