#include "s21_string.h"
// #include <string.h>
// #include <stdio.h>

/*
* @brief s21_memcmp - Функция сравнивает первые num байтов блока памяти указателя str1 с первыми num 
байтами блока памяти str2. Возвращаемое значение 0 если блоки равны, и значение отличное от 0, если  
блоки не равны.

* @Options:
 * @param str1 - Указатель на первый блок памяти.
 * @param str2 - Указатель на второй блок памяти.
 * @param n - Количество байтов для сравнения.

* @Return:
Возвращает значение, информирующее о результате сравнения содержимого блоков памяти:
Нулевое значение указывает, что содержимое обоих блоков памяти равны.
Значение больше нуля говорит о том, что первый блок памяти — str1 больше, чем блок памяти — str2, и значение
меньше нуля свидетельствует об обратном. Функция memcmp начинает сравнивать по одному байту и как только будут 
найдены первые неодинаковые символы, функция проанализирует числовой код этих символов. Чей код окажется больше, 
тот блок памяти и будет считаться больше.
*/

// ниже функция для проверки (если тесты еще не написаны)
// int main () {
//     char *str1 = "Hello World!";
//     char *str2 = "Hello World!";
//     s21_size_t n = 13;
//     int print = 0;
//     print = s21_memcmp(str1, str2, n);
//     printf("итог: %d\n", print);
// }

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
    unsigned char *str1_unsigned = (unsigned char *)str1;
    unsigned char *str2_unsigned = (unsigned char *)str2;
    int different = 0;
    for (s21_size_t i = 0; i < n; i++) {
        different = *str1_unsigned - *str2_unsigned;
        if (*str1_unsigned != *str2_unsigned) {
            break;
        }
        str1_unsigned++;
        str2_unsigned++;
    }
    return different;
}