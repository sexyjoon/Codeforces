#include <stdio.h>

int main(int argc, char const *argv[]) {

  int number_of_rooms, number_of_people_in_room, number_of_capacity_of_room;
  int result = 0;

  scanf("%d\n", &number_of_rooms);

  for (int i = 0; i < number_of_rooms; i++) {
    int temp;

    scanf("%d %d", &number_of_people_in_room, &number_of_capacity_of_room);
    while ((temp = getchar()) != '\n');

    if (number_of_capacity_of_room - number_of_people_in_room >= 2) {
      result++;
    }

  }

  printf("%d\n", result);

  return 0;
}
