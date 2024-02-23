
#include <stdio.h>

typedef struct
{
    char nom[20];
    short qunt;
    float prix;
} produit;

int main()
{
    // 1
    produit p;

    // 2
    printf("Nom de Produit ?");
    scanf("%s", p.nom);

    printf("Quantité ?");
    scanf("%hd", &p.qunt);

    printf("Prix ?");
    scanf("%f", &p.prix);

    // 3
    printf("Nom de Produit est %s\n", p.nom);
    printf("Quantité est %hd\n", p.qunt);
    printf("Prix est %.2f\n", p.prix);

    // 4
    produit TAB[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Produit Numéro %d\n", i);

        printf("Nom de Produit ?");
        scanf("%s", TAB[i].nom);

        printf("Quantité ?");
        scanf("%hd", &TAB[i].qunt);
        // scanf("%d", &(TAB + i)->qunt);

        printf("Prix ?");
        scanf("%f", &TAB[i].prix);
    }

    // 5
    for (int i = 0; i < 5; i++)
    {
        printf("Nom de Produit est %s\n", TAB[i].nom);
        printf("Quantité est %hd\n", TAB[i].qunt);
        printf("Prix est %.2f\n", TAB[i].prix);
        printf("\n");
    }
    return 0;
}