#include "../include/my_string_lib.h"

size_t my_strspn(char *s, const char *accept) {
  size_t size = 0;
  size_t counter = 0;
  while (*s != '\0') {
    if (is_symbol(*s, accept))
      counter++;
    else
      counter = 0;
    size = size > counter ? size : counter;
    s++;
  }
  return size;
}