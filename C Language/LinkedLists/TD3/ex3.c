#include <stdio.h>
#include <stdlib.h>

typedef struct polynome
{
    float coef;
    int exposant;
    struct polynome *suivant;
} polynome;

void saisie_monome(polynome *m)
{
    printf("Coef : ");
    scanf("%f", &m->coef);
    printf("Exposant : ");
    scanf("%d", &m->exposant);
    m->suivant = NULL;
}

void ajout_monome(polynome *p, polynome m)
{
    polynome mc;
    mc.coef = m.coef;
    mc.exposant = m.exposant;
    mc.suivant = NULL;

    polynome *parc = p;
    if (p == NULL)
    {
        p = &mc;
    }
    else
    {
        while (parc->suivant != NULL)
        {
            parc = parc->suivant;
        }
        parc->suivant = &mc;
    }
}

polynome copier_polynome(polynome p)
{
    polynome *pc;
    polynome *parc = &p;
    while (parc != NULL)
    {
        ajout_monome(pc, *parc);
        parc = parc->suivant;
    }
    return *pc;
}