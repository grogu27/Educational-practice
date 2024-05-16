#include "../include/my_string_lib.h"

int is_lower_char(char a)
{
  if (a >= 'a' && a <= 'z')
    return 1;
  return 0;
}