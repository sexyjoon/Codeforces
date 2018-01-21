#include <stdio.h>
#include <string.h>

#define MAX_MAZE_HEIGHT 500
#define MAX_MAZE_WIDTH 500

int is_exist_path(int pos_height, int pos_width);
void go_one_step(int pos_height, int pos_width);
int isOpenUp(int y, int x);
int isOpenDown(int y, int x);
int isOpenLeft(int y, int x);
int isOpenRight(int y, int x);

static int maze_height, maze_width, add_wall_number;
static char maze[MAX_MAZE_HEIGHT][MAX_MAZE_WIDTH];

int main(int argc, char const *argv[]) {

  scanf("%d %d %d\n", &maze_height, &maze_width, &add_wall_number);

  for (int i = 0; i < maze_height; i++) {
    for (int j = 0; j < maze_width; j++) {
      int temp;
      while ((temp = getchar()) == '\n');
      maze[i][j] = temp;
    }
  }

  for (int i = 0; i < maze_height; i++) {
    for (int j = 0; j < maze_width; j++) {
      if (maze[i][j] == '.') {
        go_one_step(i, j);

        for (int k = 0; k < maze_height; k++) {
          for (int l = 0; l < maze_width; l++) {
            if (maze[k][l] == 'P') {
              printf(".");
            }
            else {
              printf("%c", maze[k][l]);
            }
          }
          printf("\n");
        }

        return 0;
      }
    }
  }
  return 0;
}

void go_one_step(int pos_height, int pos_width) {
  if (add_wall_number <= 0) {
    return;
  }
  maze[pos_height][pos_width] = 'P';
  if (isOpenUp(pos_height, pos_width) == 1) {
    go_one_step(pos_height-1 , pos_width);
  }
  if (add_wall_number <= 0) {
    return;
  }
  if (isOpenDown(pos_height, pos_width) == 1) {
    go_one_step(pos_height+1, pos_width);
  }
  if (add_wall_number <= 0) {
    return;
  }
  if (isOpenLeft(pos_height, pos_width) == 1) {
    go_one_step(pos_height, pos_width-1);
  }
  if (add_wall_number <= 0) {
    return;
  }
  if (isOpenRight(pos_height, pos_width) == 1) {
    go_one_step(pos_height, pos_width+1);
  }
  if (add_wall_number <= 0) {
    return;
  }
  maze[pos_height][pos_width] = 'X';
  add_wall_number--;
  return;
}

int isOpenUp(int pos_height, int pos_width) {
  if (pos_height == 0) {
    return 0;
  }
  else {
    if (maze[pos_height-1][pos_width] == '.') {
      return 1;
    }
    else {
      return 0;
    }
  }
}

int isOpenDown(int pos_height, int pos_width) {
  if (pos_height == maze_height-1) {
    return 0;
  }
  else {
    if (maze[pos_height+1][pos_width] == '.') {
      return 1;
    }
    else {
      return 0;
    }
  }
}

int isOpenLeft(int pos_height, int pos_width) {
  if (pos_width == 0) {
    return 0;
  }
  else {
    if (maze[pos_height][pos_width-1] == '.') {
      return 1;
    }
    else {
      return 0;
    }
  }
}

int isOpenRight(int pos_height, int pos_width) {
  if (pos_width == maze_width-1) {
    return 0;
  }
  else {
    if (maze[pos_height][pos_width+1] == '.') {
      return 1;
    }
    else {
      return 0;
    }
  }
}
