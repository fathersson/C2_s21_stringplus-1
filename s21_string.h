#ifndef S21_STRING_H
#define S21_STRING_H

// #include <_types.h>
// #include <sys/cdefs.h>
// #include <Availability.h>
// #include <sys/_types/_size_t.h>
// #include <sys/_types/_null.h>
// #include <ctype.h>
// #include <locale.h>
// #include <math.h>
// #include <stdarg.h>
// #include <stdbool.h>
// #include <stdint.h>
// #include <stdlib.h>
// #include <wchar.h>


/*Тип size_t является беззнаковым целочисленным типом, используемым для хранения результатов оператора sizeof. 
Этот тип данных обеспечивает достаточное пространство для хранения размера самого большого объекта, который 
может обрабатывать система хоста. Битовая ширина size_t не меньше 16 бит (согласно стандартам C99 и C++11) */
typedef long unsigned int s21_size_t; // определение  типа size_t и аксимально допустимый размер для 32-битнного компилятора
typedef long unsigned s21_size_t; // определение  типа size_t и аксимально допустимый размер для 64-битнного компилятора
#define s21_NULL ((void *)0) // представление нулевого указателя в C. Использование void * может указывать на любой тип данных.

void *s21_memchr(const void *str, int c, s21_size_t n); // 1) Выполняет поиск первого вхождения символа c (беззнаковый тип) в первых n байтах строки, на которую указывает аргумент str.
int s21_memcmp(const void *str1, const void *str2, s21_size_t n); // 2) Сравнивает первые n байтов str1 и str2.
void *s21_memcpy(void *dest, const void *src, s21_size_t n); // 3) Копирует n символов из src в dest.
void *s21_memset(void *str, int c, s21_size_t n); // 4) Копирует символ c (беззнаковый тип) в первые n символов строки, на которую указывает аргумент str.
char *s21_strncat(char *dest, const char *src, s21_size_t n); // 5) Добавляет строку, на которую указывает src, в конец строки, на которую указывает dest, длиной до n символов.
char *s21_strchr(const char *str, int c); // 6) Выполняет поиск первого вхождения символа c (беззнаковый тип) в строке, на которую указывает аргумент str.
int s21_strncmp(const char *str1, const char *str2, s21_size_t n); // 7) Сравнивает не более первых n байтов str1 и str2.
char *s21_strncpy(char *dest, const char *src, s21_size_t n); // 8) Копирует до n символов из строки, на которую указывает src, в dest.
s21_size_t s21_strcspn(const char *str1, const char *str2); // 9) Выполняет поиск первого вхождения в строку string1 любого из символов строки string2, и возвращает количество символов до найденного первого вхождения.
char *s21_strerror(int errnum); // 10) Выполняет поиск во внутреннем массиве номера ошибки errnum и возвращает указатель на строку с сообщением об ошибке. Нужно объявить макросы, содержащие массивы сообщений об ошибке для операционных систем mac и linux. Описания ошибок есть в оригинальной библиотеке. Проверка текущей ОС осуществляется с помощью директив.
s21_size_t s21_strlen(const char *str); // 11) вычисляет длину строки str, не включая завершающий нулевой символ.
char *s21_strpbrk(const char *str1, const char *str2); // 12) Находит первый символ в строке str1, который соответствует любому символу, указанному в str2.
char *s21_strrchr(const char *str1, const char c); // 13) Выполняет поиск последнего вхождения символа c (беззнаковый тип) в строке, на которую указывает аргумент str.
char *s21_strstr(const char *haystack, const char *needle); // 14) Находит первое вхождение всей строки needle (не включая завершающий нулевой символ), которая появляется в строке haystack.
char *s21_strtok(char *str, const char *delim); // 15) Разбивает строку str на ряд токенов, разделенных delim.
s21_size_t s21_strspn (const char *str, const char *sym); // 16) (для strtok) определяет наибольшую длину начального участка строки, на которую указывает аргумент str, содержащего только символы строки, на которую указывает аргумент sym.

#endif