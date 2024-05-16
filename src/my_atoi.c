#include "../include/my_string_lib.h"

// Функция для конвертации строки в целое число
int my_atoi(const char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Пропуск пробелов
    while (str[i] == ' ') {
        i++;
    }

    // Обработка знака
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Конвертация строки в число
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}