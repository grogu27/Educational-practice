#include "../include/my_string_lib.h"

int is_symbol(char s1, const char *accept) {
  while (*accept != '\0') {
    if (s1 == *accept)
      return 1;
    accept++;
  }
  return 0;
}