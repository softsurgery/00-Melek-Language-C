
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

typedef struct
{
    char nom[SIZE];
    short age;
    char filiere[SIZE];
    float *note;
} Etudiant;

Etudiant *makeetudiant()
{
    return (Etudiant *)malloc(sizeof(Etudiant));
}

void initetudiant(Etudiant *e, int nbMatiere)
{
    printf("Nom ?");
    scanf("%s", e->nom);
    printf("Age?");
    scanf("%d", &e->age);
    printf("Filiere?");
    scanf("%s", e->filiere);
    e->note = (int *)malloc(sizeof(int) * nbMatiere);
    for (int i = 0; i < nbMatiere; i++)
    {
        printf("Note %d", i);
        scanf("%f", &e->note[i]);
    }
}

void viewetudiant(Etudiant *e)
{
    printf("Nom : %s\n", e->nom);
    printf("Age : %d\n", e->age);
    printf("Filiere : %s\n", e->filiere);
    for (int i = 0; i < 10; i++)
    {
        printf("Note %f : %d\n", i, e->note[i]);
    }
}

float moyenne(Etudiant *e, int nbMatiere)
{
    float somme = 0;
    for (int i = 0; i < nbMatiere; i++)
    {
        somme += e->note[i];
    }
    return somme / nbMatiere;
}

void tabetudiant(Etudiant T[], int *n, Etudiant *e)
{
    int pos = 0;
    while (pos < *n && strcmp(e->nom, T[pos].nom) < 0)
        pos++;
    if (pos == n)
        T[*n] = *e;
    else
    {
        for (int i = *n; i > pos; i--)
            T[i] = T[i - 1];
        T[pos] = *e;
    }
    (*n)++;
    for (int i = 0 ; i < *n ; i++){
        printf("Etudiant %d : \n");
        viewetudiant(&T[i]);
    }  
}

int main()
{
    // Etudiant* etudiant = makeetudiant();
    return 0;
}