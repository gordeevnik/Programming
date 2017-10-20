#include <stdio.h>

enum Months
{
    Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

struct Figure
{
    int x;
    int y;
    int width;
    int height;
};

union Printer
{
    unsigned short value;
    struct
    {
        unsigned short ready: 1;
        unsigned short tonnerEnough: 1;
        unsigned short damaged: 1;
        unsigned short noPaper: 1;
    } bitMask;
} printer;


int getFigureSquare(struct Figure *figure)
{
    return figure->width * figure->height;
}

char *formatState(int state)
{ return state == 1 ? "yes" : "no"; }

int main()
{
    char string[12];
    printf("\nJuly is month number: %d \n", Jul);
    struct Figure figure = {0, 0, 100, 100};

    printf("\nSquare area is: %d\n", getFigureSquare(&figure));


    scanf("%x", &printer.value);

    printf("Ready: %s\n", formatState(printer.bitMask.ready));
    printf("Tonner enough: %s\n", formatState(printer.bitMask.tonnerEnough));
    printf("Damaged: %s\n", formatState(printer.bitMask.damaged));
    printf("Enough paper:%s\n", formatState(printer.bitMask.noPaper));

}
