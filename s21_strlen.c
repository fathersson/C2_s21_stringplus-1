#include "s21_string.h"
// #include <stdio.h>

/*
* @brief s21_strlen - вычисляет длину строки str, не включая завершающий нулевой символ.

* @Options:
 * @param str – указатель на строку.

* @Return:
Количество символов в строке до первого вхождения символа конца строки.

* @Description:
Функция strlen вычисляет количество символов в строке до первого вхождения символа конца строки. 
При этом символ конца строки не входит в подсчитанное количество символов
*/

s21_size_t s21_strlen(const char *str) {
    s21_size_t count = 0;
    for (s21_size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\0') {
            break;
        }
        count++;
    }
    return count;
}

// ниже функция для проверки (если тесты еще не написаны)
// int main () {
//     int print = 0;
//     char *str = "Hello World!";
//     print = s21_strlen(str);
//     printf("итог: %u\n", print);
// }