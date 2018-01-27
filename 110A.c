#include <stdio.h>

int is_lucky_number(int number);
int is_nearly_lucky_number(char *number_string);
int count_lucky_digits(char *number_string);

int main(int argc, char const *argv[]) {

  char number_string[19];
  int temp, i = 0;
  int result;

  while((temp = getchar()) != '\n') {
    number_string[i] = temp;
    i++;
  }

  result = is_nearly_lucky_number(number_string);

  if (result) {
    printf("YES\n");
  }
  else {
    printf("NO\n");
  }

  return 0;
}

int is_lucky_number(int number) {

  int i = 0;


  if (number == 4 || number == 7) {
    return 1;
  }

  return 0;

}

int is_nearly_lucky_number(char *number_string) {

  int number_of_luckey_digits = count_lucky_digits(number_string);
  int result = is_lucky_number(number_of_luckey_digits);

  return result;
}

int count_lucky_digits(char *number_string) {

  int i = 0, count = 0;

  while (number_string[i] != '\0') {
    if (number_string[i] == '4' || number_string[i] == '7') {
      count++;
    }
    i++;
  }
  
  return count;

}
