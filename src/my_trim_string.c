#include "../include/my_string_lib.h"

// Функция для обрезки строки
void trim_string(char *str) {
    int len = my_strlen(str);
    int start = 0;
    int end = len - 1;

    // Находим начало подстроки без пробелов
    while (isspace(str[start])) {
        start++;
    }

    // Находим конец подстроки без пробелов
    while (end > start && isspace(str[end])) {
        end--;
    }

    // Обрезаем строку
    for (int i = start; i <= end; i++) {
        str[i - start] = str[i];
    }
    str[end - start + 1] = '\0';
}