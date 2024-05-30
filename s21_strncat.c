#include "s21_string.h"
// #include <stdio.h>
// #include <string.h>

/*
* @brief Добавляет строку, на которую указывает src, в конец строки, на которую указывает dest, 
длиной до n символов.

* @Options:
 * @param dest – указатель на массив в который будет добавлена строка.
 * @param src – указатель на массив из которого будет скопирована строка.
 * @param n – максимальная длина добавляемой строки.

* @Return:
Функция возвращает указатель на массив, в который добавлена строка (destination).

* @Description:
Функция strncat добавляет в строку, на которую указывает аргумент destination, строку, на которую 
указывает аргумент src, пока не встретится символ конца строки или пока не будет добавлено n символов.
Символ конца строки помещается в конце объединенных строк.
Если строки перекрываются, результат объединения будет не определен.
*/

// ниже функция для проверки (если тесты еще не написаны)
// int main () {
//     char dest[] = "rrr";
//     char src[] = "dddddd";
//     s21_size_t n = 3;
//     s21_strncat(dest, src, n);
//     printf("итог2: %s\n", dest);
// }

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
    s21_size_t dest_len = s21_strlen(dest);
    s21_size_t i = 0;
    while (i < n && src[i]) {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return  dest;
}