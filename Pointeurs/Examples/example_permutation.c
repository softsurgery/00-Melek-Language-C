#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y)
{
    int p = *x;
    *x = *y;
    *y = p;
}

int main()
{
    int x;
    printf("X = ");
    scanf("%d", &x);

    int y;
    printf("Y = ");
    scanf("%d", &y);

    printf("Avant : X = %d ; Y= %d \n", x, y);
    swap(&x, &y);
    printf("Apres : X = %d ; Y= %d \n", x, y);
  

    return 0;
}