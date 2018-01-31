#include <stdio.h>

int can_be_friends(int my_army, int player_army, int limit);
int count_bits_is_one(int number);

static int number_of_soldiers_type, number_of_players, number_of_friend_limit;

int main(int argc, char const *argv[]) {



  int players_army[1000], my_army;

  int friends = 0;

  scanf("%d %d %d", &number_of_soldiers_type, &number_of_players, &number_of_friend_limit);
  while(getchar() != '\n');

  for (int i = 0; i < number_of_players; i++) {
    scanf("%d", &players_army[i]);
    while(getchar() != '\n');
  }

  scanf("%d", &my_army);

  for (int i = 0; i < number_of_players; i++) {
    if (can_be_friends(my_army, players_army[i], number_of_friend_limit)) {
      friends++;
    }
  }

  printf("%d\n", friends);

  return 0;
}

int can_be_friends(int my_army, int player_army, int limit) {

  int compare_set_army = my_army ^ player_army;

  if (limit >= count_bits_is_one(compare_set_army)) {
    return 1;
  }
  else {
    return 0;
  }

}

int count_bits_is_one(int number) {

  int count = 0;

  for (int i = 0; i < number_of_soldiers_type; i++) {
    if (number & 0x01) {
      count++;
    }
    number >>= 1;
  }

  return count;
}
