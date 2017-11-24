#include <stdio.h>
#include <string.h>

int getPosition(const char *phrase, const char *symbolsSet)
{
    return (int) (strpbrk(phrase, symbolsSet) - phrase);
}

int main()
{

    char str1[64] = "Abc";
    char str2[64] = "Def";
    char test1[64] = "ABC";
    char test2[64] = "defghijklmnopqrstuvwxyz";
    char test3[16] = "Hello,world";
    char test4[16] = "Hell";
    char copy[64] = "qwerty";
    char TargetSymbols[16] = "";
    char symb[1] = "";
    short int len;
    int result = 0;
    int n;

    /*Первое задание*/
    printf("\n1) Сложение двух строк: %s", strcat(str1, str2));


    /*Второе задание */
    printf("\n2) Введите количество элементов из 2 строки:");
    scanf("%d", &n);
    printf("Сложение строк: %s", strncat(test1, test2, n));


    /*Третье задание*/
    printf("\n3) Сравнение строк:");
    result = strncmp(test1, test2, len);
    if (result > 0)
        printf("\nПервая строка  >  Второй строки");
    else if (result < 0)
        printf("\nВторая строка  >  Первой строки");
    else
        printf("\nСтроки равны");

    /*Четвертое задание*/
    printf("\n4) Количество сравниваемых элеметов относительно начала строки:");

    scanf("%d", &n);

    if (strncmp(test3, test4, n) == 0)
        printf("Эти элементы одинаковые", n);

    else
        printf("Эти элементы разные", n);

    /*Пятое задание*/
    printf("\n5) Копирование первой строки во вторую:");
    strcpy(str1, copy);
    printf(" %s", str1);

    /*Шестое задание*/
    printf("\n6) Введите количество символов, которые нужно скопировать из одной строки в другую:");

    scanf("%d", &n);

    printf("Копирование символов: %s", strncpy(test1, copy, n));

    /*Задание 7*/
    printf("\n7) Длина строки '%s'= %d\n", test3, strlen(test3));

    /*Задание 8*/
    printf("8) Строка = '%s'", test3);
    printf("\nВведите символ, для которого нужно указать позицию:");
    scanf(" %s", symb);
    printf("Символ был найден на [%d] позиции \n", getPosition(test3, symb));
}