#include "../include/my_string_lib.h"

// Функция для удаления всех пробелов из строки
void remove_spaces(char *str) {
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}