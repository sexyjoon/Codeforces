#include <stdio.h>


void quick_sort(int *buf, int left, int right);
int partition(int *buf, int left, int right);
void swap(int *buf, int left, int right);

static int strength_dragon[1000], bonus[1000];

int main(int argc, char const *argv[]) {

  int strength_mine, number_of_dragons;


  scanf("%d %d", &strength_mine, &number_of_dragons);
  while (getchar() != '\n');

  for (int i = 0; i < number_of_dragons; i++) {
    scanf("%d %d", &strength_dragon[i], &bonus[i]);
    while (getchar() != '\n');
  }

  quick_sort(strength_dragon, 0, number_of_dragons - 1);

  for (int i = 0; i < number_of_dragons; i++) {
    if (strength_dragon[i] >= strength_mine) {
      printf("NO\n");
      return 0;
    }
    strength_mine += bonus[i];
  }

  printf("YES\n");

  return 0;
}

void quick_sort(int *buf, int left, int right) {

  if (left < right) {
    int pick = partition(strength_dragon, left, right);
    quick_sort(strength_dragon, left, pick - 1);
    quick_sort(strength_dragon, pick + 1, right);
  }

}

int partition(int *buf, int left, int right) {

  int i = left - 1, j = left;
  int pivot = buf[right];

  for (j = left; j < right; j++) {
    if (buf[j] <= pivot) {
      i++;
      swap(strength_dragon, i, j);
      swap(bonus, i, j);
    }
  }
  swap(strength_dragon, i + 1, right);
  swap(bonus, i + 1, right);

  return i + 1;

}

void swap(int *buf, int left, int right) {

  int temp = buf[left];
  buf[left] = buf[right];
  buf[right] = temp;

}
