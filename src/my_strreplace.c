#include "../include/my_string_lib.h"

// Функция для замены всех вхождений символа old в строке на символ new
char *my_strreplace(char *str, char old, char new) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == old) {
            str[i] = new;
        }
    }
    return str;
}