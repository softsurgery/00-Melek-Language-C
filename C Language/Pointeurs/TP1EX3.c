#include <stdio.h>
#include <stdlib.h>

int alea(int min, int max)
{
    return min + rand() % (max - min);
}

float alea_frac(float min, float max)
{
    return ((float)alea(min, max)) / 100;
}

float alea_perso()
{
    return alea(3, 8) + alea_frac(25, 91);
}

int main()
{
    float *ptr = NULL;
    int taille;
    do
    {
        printf("Taille = ");
        scanf("%d", &taille);
    } while (taille < 3);
    ptr = (float *)malloc(sizeof(float) * taille);
    int i;
    for (float *i = ptr; i < ptr + taille; i++)
    {
        *i = alea_perso();
    }
    for (float *i = ptr; i < ptr + taille; i++)
    {
        printf("Reel Numero %ld  = %.2f\n", i - ptr, *i);
    }
    ptr = (float *)realloc(ptr, sizeof(float) * (taille + 3));

    for (float *i = ptr + taille; i < ptr + taille + 3; i++){
        *i = alea_perso();
    }

    for (float *i = ptr; i < ptr + taille+3; i++)
    {
        printf("%.2f\n", *i);
    }
    free(ptr);

    return 0;
}