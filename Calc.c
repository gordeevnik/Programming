#include "Calc.h"
#include <stdio.h>

struct Square createSquare()
{

    struct Square square;
    printf("Введите Длину: ");
    scanf("%d", &square.x);

    printf("Введите Ширину: ");
    scanf("%d", &square.y);

    return square;
};

void Calc(struct Square square)
{
    int Perimetr = 2 * (square.x + square.y);
    int Square = square.x * square.y;
    printf("Периметр: %d  ", Perimetr);

    printf("Площадь: %d  ", square);

}