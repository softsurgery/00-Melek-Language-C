#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    printf("N = %d\n", n);
    int *pn;
    pn = &n;
    printf("Numéro de case de memoire pour la variable n = %d\n", &n);
    printf("Numéro de case que le pointeur pn est pointé =  %d\n", pn);

    //*********************************************
    int a = 10;
    pn = &a;
    *pn = 0;

    printf("N = %d\n", n);
    printf("a = %d\n", a);
    return 0;
}