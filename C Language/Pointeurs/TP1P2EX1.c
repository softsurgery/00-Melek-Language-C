#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Allocation Mémoire échouée\n");
    }
    else
    {
        *ptr = 5;
        printf("La valeur pointeé par ptr est %d\n", *ptr);
        free(ptr);
    }
    return 0;
}