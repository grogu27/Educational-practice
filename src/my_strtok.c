#include "../include/my_string_lib.h"

int my_strtok(char *str, char symbol, char *result[]) {
  int count = 1;
  result[0] = str;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == symbol) {
      str[i] = '\0';
      count++;
      result[count-1] = &str[i+1];
    }
  }
  return count;
}