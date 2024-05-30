#include "s21_string.h"
// #include <stdio.h>
// #include <string.h>

/*
* @brief Копирует символ c (беззнаковый тип) в первые n символов строки, на которую указывает аргумент str.

* @Options:
 * @param str – указатель на заполняемый массив
 * @param c – код символа для заполнения
 * @param n – размер заполняемой части массива в байтах

* @Return:
Функция возвращает указатель на заполняемый массив.

* @Description:
Функция memset заполняет первые n байт области памяти, на которую указывает аргумент str, 
символом, код которого указывается аргументом c.
*/

// ниже функция для проверки (если тесты еще не написаны)
// int main () {
//     char str[28] = "1234567890";
//     int c = 108;
//     s21_size_t n = 5;
//     unsigned char *print = s21_NULL;
//     print = s21_memset(str, c, n);
//     printf("итог: %s\n", print);
// }

void *s21_memset(void *str, int c, s21_size_t n) {
    unsigned char *str_unsigned = (unsigned char*) str;
    for (s21_size_t i = 0; i < n; i++) {
        str_unsigned[i] = c;
    }
    return str;
}