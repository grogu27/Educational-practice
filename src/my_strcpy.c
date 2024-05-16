#include "../include/my_string_lib.h"

char *my_strcpy(char *to, char *from) 
{
  for (size_t i = 0; i < my_strlen(from); i++) 
  {
    to[i] = from[i];
  }
  to[my_strlen(from)] = '\0';

  return to;
}