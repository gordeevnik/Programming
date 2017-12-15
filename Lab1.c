#include <stdio.h>

int main()
{
    int cel;

    float vesh;

    printf("Vvedite:\n 1)Czeloe chislo \n 2)Veshestvennoe chislo \n");

    scanf("%d", &cel);

    scanf("%f", &vesh);

    printf("Vivod:\n %d\t%f\n ", cel, vesh);

    return 0;
}