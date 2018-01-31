#include <stdio.h>

void change_position(char *queue);

int main(int argc, char const *argv[]) {

  int number_of_children, second;
  char queue[50];

  scanf("%d %d\n", &number_of_children, &second);

  for (int i = 0; i < number_of_children; i++) {
    queue[i] = getchar();
  }

  for (int i = 0; i < second; i++) {
    change_position(queue);
  }

  for (int i = 0; i < number_of_children; i++) {
    printf("%c", queue[i]);
  }

  printf("\n");

  return 0;
}

void change_position(char *queue) {

  int i = 0, temp;

  while (queue[i] != '\0' && queue[i+1] != '\0') {
    if (queue[i] == 'B' && queue[i+1] == 'G') {
      temp = queue[i];
      queue[i] = queue[i+1];
      queue[i+1] = temp;
      i += 2;
    }
    else {
      i++;
    }
  }

}
