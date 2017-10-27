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


void PrintMon(int MonthNum)
{
    switch (MonthNum)
    {
        case Jan:
            printf("Jan is month number: %d", Jan);
            break;
        case Feb:
            printf("Feb is month number: %d", Feb);
            break;
        case Mar:
            printf("Mar is month number: %d", Mar);
            break;
        case Apr:
            printf("Apr is month number: %d", Apr);
            break;
        case May:
            printf("May is month number: %d", May);
            break;
        case Jun:
            printf("Jun is month number: %d", Jun);
            break;
        case Jul:
            printf("Jul is month number: %d", Jul);
            break;
        case Aug:
            printf("Aug is month number: %d", Aug);
            break;
        case Sep:
            printf("Sep is month number: %d", Sep);
            break;
        case Oct:
            printf("Oct is month number: %d", Oct);
            break;
        case Nov:
            printf("Nov is month number: %d", Nov);
            break;
        case Dec:
            printf("Dec is month number: %d", Dec);
            break;
        default:
            printf("Wrong number");
            break;
    }
}

int main()
{
    int MonthNum;
    printf("Enter Month Number: ");
    scanf("%d", &MonthNum);
    PrintMon(MonthNum);


    struct Figure figure = {0, 0, 100, 100};

    printf("\nSquare area with (width = 100, height = 100) is: %d ", getFigureSquare(&figure));

    printf("\nEnter height and width for square to calculate it's area: ");
    scanf("%d %d", &figure.height, &figure.width);
    printf("\nSquare area is: %d\n", getFigureSquare(&figure));


    printf("\nEnter 16cc code: ");
    scanf("%x", &printer.value);

    printf("\nReady: %s\n", formatState(printer.bitMask.ready));
    printf("Tonner enough: %s\n", formatState(printer.bitMask.tonnerEnough));
    printf("Damaged: %s\n", formatState(printer.bitMask.damaged));
    printf("Enough paper:%s\n", formatState(printer.bitMask.noPaper));

}
