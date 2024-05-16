#include "../include/my_string_lib.h"

int my_strcmp(char *str, char *str2)
{
  int i = 0;
  while (str[i] != '\0' || str2[i] != '\0')
  {
    if (str[i] > str2[i])
      return 1;
    if (str[i] < str2[i])
      return -1;
    i++;
  }
  return 0;
}