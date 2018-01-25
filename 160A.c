#include <stdio.h>

void quick_sort(int *buf, int left, int right);
int partition(int *buf, int left, int right);
void swap(int *buf, int left, int right);

int main(int argc, char const *argv[]) {

  int number_of_coins;
  int buffer_of_coins[100];
  int sum_of_all = 0, sum_of_mine = 0;
  int result = 0;

  scanf("%d\n", &number_of_coins);

  for (int i = 0; i < number_of_coins; i++) {

    scanf("%d", &buffer_of_coins[i]);
    sum_of_all += buffer_of_coins[i];
    getchar();

  }

  quick_sort(buffer_of_coins, 0, number_of_coins - 1);

  while (sum_of_mine <= (sum_of_all / 2)) {

    sum_of_mine += buffer_of_coins[--number_of_coins];
    result++;
    
  }

  printf("%d\n", result);

  return 0;

}

void quick_sort(int *buf, int left, int right) {

  if (left < right) {
    int pick = partition(buf, left, right);
    quick_sort(buf, left, pick - 1);
    quick_sort(buf, pick + 1, right);
  }

}

int partition(int *buf, int left, int right) {

  int i = left - 1, j = left;
  int pivot = buf[right];

  for (j = left; j < right ; j++) {
    if (buf[j] <= pivot) {
      i++;
      swap(buf, i, j);
    }
  }
  swap(buf, i + 1, right);

  return i + 1;

}
void swap(int *buf, int left, int right) {

  int temp = buf[left];
  buf[left] = buf[right];
  buf[right] = temp;

}
