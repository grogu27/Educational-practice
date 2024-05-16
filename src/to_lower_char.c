#include "../include/my_string_lib.h"

char to_lower_char(char a)
{
  if (a >= 'a' && a <= 'z')
    return a;
  else
    return a - 'A' + 'a';
}