#include <stdio.h>

int main(int argc, char const *argv[]) {

  int line;
  int x, y, z;
  int result_x = 0, result_y = 0, result_z = 0;

  scanf("%d\n", &line);

  for (int i = 0; i < line; i++) {

    int temp;

    scanf("%d %d %d", &x, &y, &z);
    while ((temp = getchar()) != '\n');

    result_x += x;
    result_y += y;
    result_z += z;

  }

  if (result_x == 0 && result_y == 0 && result_z == 0) {
    printf("YES\n");
  }
  else {
    printf("NO\n");
  }

  return 0;
}
