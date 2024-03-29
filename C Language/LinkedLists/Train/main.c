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

//typedef noeud* liste

void ajourerLocomotive(liste* l){
    if (l->tete == NULL || strcmp(l->tete->w.type,"locomotive")!= 0 ){
        noeud* nouveau = (noeud*) malloc(sizeof(noeud));
        printf("Numero = ");
        scanf("%d",&nouveau->w.num);
        strcpy(nouveau->w.type,"locomotive");
        nouveau->w.etat=1;

        nouveau->suivant=l->tete;
        l->tete=nouveau;
    } else printf("On peut pas ajouter une locomotive");
   
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
}

void supprimer_en_panne(liste* l){
    if (l->tete != NULL){
        noeud  *prec=l->tete, *p = l->tete->suivant;
        while(p!=NULL) {
            while(p->w.type!=0){
                prec = p;
                p = p->suivant;
            }
            prec->suivant = p->suivant;
            free(p);
            p = prec->suivant;
        }
        if (l->tete->w.type==0){
            p = l->tete;
            l->tete = l->tete->suivant;
            free(p);
        }
    } 
    
}

void ajouter_en_position(liste* l, int pos){
    if (pos < 0) printf("Postion -");
    else {
        noeud* p = l-> tete;
        while(p!=NULL && pos!=0){
            pos--;
            p = p->suivant;
        }
        if (p!=NULL && pos!=0) printf("Postion ++");
        else {
            noeud* nouveau = (noeud*) malloc(sizeof(noeud));
            printf("Numero = ");
            scanf("%d",&nouveau->w.num);
            strcpy(nouveau->w.type,"wagon");
            nouveau->w.etat=1;

            if (l->tete == NULL){
                nouveau->suivant=l->tete;
                l->tete=nouveau;
            } else {
                nouveau->suivant = p->suivant;
                p->suivant=nouveau;
            }
        }

    }
}

void ajouter_apres_wagon(liste* l,int num,wagon w){
    noeud* nouveau = (noeud*) malloc(sizeof(noeud));
    nouveau->w = w;
    noeud* p = l->tete;
    while(p!=NULL && p->w.num!=num) p = p->suivant;
    if (p!=NULL) {
        nouveau->suivant = p->suivant;
        p->suivant=nouveau;
    }
}

void purge(liste* l){
    if (l->tete !=NULL){
        noeud* prec = l->tete;
        noeud* p = l->tete->suivant;
        while(p!=NULL){
            free(prec);
            prec = p;
            p = p->suivant;
        }
        free(prec);
    }
}

