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
            printf("Jan %d", Jan);
            break;
        case Feb:
            printf("Feb %d", Feb);
            break;
        case Mar:
            printf("Mar %d", Mar);
            break;
        case Apr:
            printf("Apr %d", Apr);
            break;
        case May:
            printf("May %d", May);
            break;
        case Jun:
            printf("Jun %d", Jun);
            break;
        case Jul:
            printf("Jul %d", Jul);
            break;
        case Aug:
            printf("Aug %d", Aug);
            break;
        case Sep:
            printf("Sep %d", Sep);
            break;
        case Oct:
            printf("Oct %d", Oct);
            break;
        case Nov:
            printf("Nov %d", Nov);
            break;
        case Dec:
            printf("Dec %d", Dec);
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

    char string[12];
//    printf("\nJuly is month number: %d \n", Jul);
    struct Figure figure = {0, 0, 0, 0};

    printf("\nSquare area with (width,height = 100) is: %d ", getFigureSquare(&figure));

    printf("\nEnter height and width for square to calculate it's area: ");
    scanf("%d %d \n", &figure.height, &figure.width);
    printf("square area: %d\n", getFigureSquare(&figure));


    printf("\nEnter 16cc code: ");
    scanf("%x", &printer.value);

    printf("Ready: %s\n", formatState(printer.bitMask.ready));
    printf("Tonner enough: %s\n", formatState(printer.bitMask.tonnerEnough));
    printf("Damaged: %s\n", formatState(printer.bitMask.damaged));
    printf("Enough paper:%s\n", formatState(printer.bitMask.noPaper));

}
