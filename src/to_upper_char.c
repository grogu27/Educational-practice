#include "../include/my_string_lib.h"

char to_upper_char(char a)
{
  if (a >= 'A' && a <= 'Z')
    return a;
  else
    return a - 'a' + 'A';
}