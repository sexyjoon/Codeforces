#include <stdio.h>
#include <string.h>

int check(char** pos);
void find(char** pos, int x, int y);
int main(int argc, char const *argv[]) {

  static int n, m, k;
  int len;
  char buf[502][502];

  scanf("%d %d %d", &n, &m, &k);

  for (int i = 0; i < n; i++) {
    fgets(buf[i]);
    buf[i][m] = '\0';
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (k == 0) {
        break;
      }
      if (buf[i][j] == '.') {
        buf[i][j] = 'X';
        if (check(buf) == 1) {

        }
        else {

        }
      }
      k--;
    }
  }


  return 0;
}

int check(char** buf) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (buf[i][j] != '#' || buf[i][j] != 'X') {

      }
    }
  }
}

void find(char** pos, int x, int y) {

}

int isBlock(char** buf, int x, int y) {
  if (x == 0 && y == 0) {

  }
  else if (x == 0 && y == (n-1)) {

  }
  else if (x == (m-1) && y == 0) {

  }
  else if (x == (m-1) && y == (n-1)) {

  }
  else if (x == 0 && y > 0 && y < (n-1)) {

  }
  else if (x == (m-1) && y > 0 && y < (n-1)) {

  }
  else if (x > 0 && x < (m-1) && y == 0) {

  }
  else if (x > 0 && x < (m-1) && y == (n-1)) {

  }
  else {
    if (buf[x-1][y] == '.' ||
        buf[x+1][y] == '.' ||
        buf[x][y-1] == '.' ||
        buf[x][y+1] == '.')
  }
}
