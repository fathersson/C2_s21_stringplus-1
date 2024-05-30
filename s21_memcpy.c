#include "s21_string.h"
// #include <stdio.h>

/*
* @brief s21_memcpy – Копирует n символов из src в dest.

* @Options:
 * @param dest – указатель на массив в который будут скопированы данные.
 * @param src – указатель на массив источник копируемых данных.
 * @param n – количество байт для копирования.

* @Return:
Функция возвращает указатель на массив, в который скопированы данные.

* @Description:
Функция memcpy копирует n байт из массива (области памяти), на который указывает аргумент source, 
в массив (область памяти), на который указывает аргумент destination. Если массивы перекрываются, 
результат копирования будет не определен.

source - источник (откуда)
destination - пункт назначения (куда)
*/

// ниже функция для проверки (если тесты еще не написаны)
// int main () {
//     char dest[12] = {0};
//     char src[] = "Hello World!";
//     s21_size_t n = 7;
//     unsigned char *print = s21_NULL;
//     print = s21_memcpy(dest, src, n);
//     printf("итог: %s\n", print);
// }

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
    unsigned char *dest_unsigned = (unsigned char *)dest;
    unsigned char *src_unsigned = (unsigned char *)src;
    for (s21_size_t i = 0; i < n; i++) {
        dest_unsigned[i] = src_unsigned[i];
    }
    return dest_unsigned;
}