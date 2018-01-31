#include <stdio.h>

void change_turn(int *turn_position);

int main(int argc, char const *argv[]) {

  char *turn[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
  int turn_position = 0;

  int n_th_cola;
  int temp = 1;
  int count = 1;

  scanf("%d", &n_th_cola);

  while (1) {

    for (int i = 0; i < 5; i++) {

      for (int j = 1; j <= temp; j++) {
        if (count == n_th_cola) {
          printf("%s\n", turn[turn_position]);
          return 0;
        }
        count++;
      }
      change_turn(&turn_position);

    }
    temp *= 2;
  }


  return 0;
}

void change_turn(int *turn_position) {

  if (*turn_position == 4) {
    *turn_position = 0;
  }
  else {
    (*turn_position)++;
  }

}
