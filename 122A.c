#include <stdio.h>

int main(int argc, char const *argv[]) {

  int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  int amount_of_luckey_numbers  = sizeof(lucky_numbers) / sizeof(int);
  int input_number;

  scanf("%d", &input_number);

  for (int i = 0; i < amount_of_luckey_numbers; i++) {
    if ((input_number == lucky_numbers[i]) || (input_number % lucky_numbers[i] == 0)) {
      printf("YES\n");
      return 0;
    }
  }

  printf("NO\n");
  return 0;

}
