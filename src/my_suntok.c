#include "../include/my_string_lib.h"

int my_suntok(char *str, char symbol, int count) {
  for (int i = 0; count - 1 > 0; i++) {
    if (str[i] == '\0') {
      str[i] = symbol;
      count -= 1;
    }
  }
  return 0;
}