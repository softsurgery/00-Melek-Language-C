#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int num;
    char type[12];
    short etat;
} wagon;

typedef struct noeud{
    wagon w;
    struct noeud* suivant;
} noeud;

typedef struct {
    noeud* tete;
} liste;

void ajourerLocomotive(liste* l){
    noeud* nouveau = (noeud*) malloc(sizeof(noeud));

    printf("Numero = ");
    scanf("%d",&nouveau->w.num);
    strcpy(nouveau->w.type,"locomotive");
    nouveau->w.etat=1;

    nouveau->suivant=l->tete;
    l->tete=nouveau;
}

void ajouterWagon(liste* l){
    noeud* nouveau = (noeud*) malloc(sizeof(noeud));

    printf("Numero = ");
    scanf("%d",&nouveau->w.num);
    strcpy(nouveau->w.type,"wagon");
    nouveau->w.etat=1;

    nouveau->suivant=NULL;
    
    if (l->tete == NULL){
        l->tete=nouveau;
    } else {
        noeud* p = l->tete;
        while(p->suivant != NULL) p = p->suivant;
        p->suivant=nouveau;
    }
}

int rechercheWagon(liste l,int num){
    noeud* p = l.tete;
    while(p!= NULL){
        if (p->w.num == num && strcmp(p->w.type,"wagon")==0){
            printf("Wagon [Num = %d , etat = %s]", num, p->w.type == 1 ? "OK" : "en panne");
            return 1;
        } 
        p = p->suivant;
    }
    return 0;
}

void afficheTrain(liste l){
    printf("Locomotive [Num = %d , etat = %s]\n", l.tete->w.num, l.tete->w.type == 1 ? "OK" : "en panne");
    noeud* p = l.tete->suivant;
    while(p!= NULL){
        printf("Wagon [Num = %d, etat = %s]\n", p->w.num, p->w.type == 1? "OK" : "en panne");
        p = p->suivant;
}


