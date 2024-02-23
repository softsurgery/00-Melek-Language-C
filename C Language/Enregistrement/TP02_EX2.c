
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char titre[30];
    char auteur[20];
    short annee;
}Livre;

void saisirlivre(Livre* l){
    printf("Titre?");
    scanf("%s", l->titre);
    printf("Auteur?");
    scanf("%s", l->auteur);
    printf("Année?");
    scanf("%hd", &l->annee);
}

void infolivre(Livre l){
    printf("Titre est %s , Auteur est %s , Année est %hd\n", l.titre, l.auteur, l.annee);
}

void remplivres(Livre T[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Les Information de Livre Numéro %d\n",i);
        saisirlivre(&T[i]);
    }
    /* 
    Livre* i;
    for(i=T;i<T+n;i++){
        printf("Les Information de Livre Numéro %d\n",i);
        saisirlivre(i);
    }*/
}

void afflivres(Livre T[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Les Information de Livre Numéro %d\n",i);
        infolivre(T[i]);
    }
}

int main(){
    int n;
    printf("Combien de Livre voulez vous introduire ?\n");
    scanf("%d",&n);
    Livre *T = (Livre*) malloc(n*sizeof(Livre));
    remplivres(T,n);
    afflivres(T,n);
    return 0;
}