#include <stdio.h>
#include <stdlib.h>

int addNumbers(int a, int b)
{
    return a + b;
}


int main(int argCount, char *argv[])
{
    printf("This Lab Should be opened in console with using >python Lab12.c");
    freopen("../output.txt", "w", stdout);      // <--Output file will be created after running program.

    int first = atoi(argv[1]);
    int second = atoi(argv[2]);
    int sum = addNumbers(first, second);

    printf("%d + %d = %d", first, second, sum);

    return 0;
}