#include <stdio.h>
#include <stdlib.h>

int addNumbers(int a, int b)
{
    return a + b;
}


int main(int argCount, char *argv[])
{
    freopen("../output.txt", "w", stdout);

    int first = atoi(argv[1]);
    int second = atoi(argv[2]);
    int sum = addNumbers(first, second);

    printf("%d + %d = %d", first, second, sum);

    return 0;
}