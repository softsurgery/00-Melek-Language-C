#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
    T[0] = 5;
    T[1] = 10;
    printf("%d\n", T[0]);
    printf("%d\n", *T);
    printf("%d\n", T[1]);
    printf("%d\n", *(T + 1));
    printf("%d\n", *T + 1);
    return 0;
}