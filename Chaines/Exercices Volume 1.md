# Exercice 1 :

* En utilisant la fonction getchar()qui permet de lire un caractère saisi au clavier et qui le retourne, écrire une fonction qui lit une chaîne de caractères tapée au clavier et qui l'enregistre dans un tableau de caractères. Le caractère saut de ligne `\n` indiquera la fin de la saisie.

```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
    char ch[MAX];
    int n = 0;
    char c;
    do{
        c = getchar();
        ch[n] = c;
        n++;
        fflush(stdin);
    }while(c!='\n' && n<MAX);
    ch[n] = '\0';
    printf("votre chaine est %s \n",ch);
    return 0;
}

```

# Exercice 2 :

* Écrire une fonction qui calcule la longueur d'une chaîne.

```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int longeur(char ch[]){
    int n = 0;
    while(ch[n]!='\0') n++;
    return n;
}


int main(){
    char ch[MAX];
    gets(ch);
    printf("%s contient %d caractere(s)\n",ch,longeur(ch));
    printf("HELLO contient %d caractere(s)",longeur("HELLO")); 
    //exigence d'utiliser le mot cle const 
    return 0;
}

```

# Exercice 3:

* Écrire une fonction supprime_espace qui supprime les espaces et tabulations d'une chaîne de caractères. Cette fonction ne doit pas utiliser de tableau intermédaire.

```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int longeur(char ch[]){
    int n = 0;
    while(ch[n]!='\0') n++;
    return n;
}

void clean(char ch[]){
    int i,j, n = longeur(ch);
    for (i=0;i<n;i++){
        if (ch[i] == ' ' || ch[i]== '\t'){
            for(j=i;j<n;j++)ch[j] = ch[j+1];
            n--;
            i--;
        }
    }
}

int main(){
    char ch[MAX];
    gets(ch);
    printf("la version clean de %s",ch);
    clean(ch);
    printf("est %s\n",ch);
    return 0;
}

```

# Exercice 4 :

* Écrire une fonction qui inverse une chaîne de caractères et met le résultat dans une autre. Les chaînes sont données en argument.

```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int longeur(char ch[]){
    int n = 0;
    while(ch[n]!='\0') n++;
    return n;
}

void inverse_chaine(char chaine[MAX], char inv[MAX]){
    int i,n = longeur(chaine);
    for(i=0;i<n;i++) inv[i] = chaine[n-i-1];
}


int main(){
    char ch[MAX];
    gets(ch);
    char inv[MAX];
    inverse_chaine(ch,inv);
    printf("l'inverse de %s est %s",ch,inv);
    return 0;
}

```

# Exercice 5 :

* On appelle palindrome une suite de caractères qui se lit de la même façon dans les deux sens (exemple: ''laval'', ''ressasser '',''engage le jeu que je le gagne ''). Ecrire une fonction palindrome qui teste si une chaîne est un palindrome.

### Methode 1 :

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int longeur(char ch[]){
    int n = 0;
    while(ch[n]!='\0') n++;
    return n;
}

int estPalindrome(char ch[]){
    int i = 0 ,j =longeur(ch)-1;
    while(i<j && ch[i]==ch[j]){
        i++;
        j--;
    };
    return i>=j;
}


int main(){
    char ch[MAX];
    gets(ch);
    if (estPalindrome(ch)) printf("Palindrome\n");
    else printf("Non Palindrome\n");
    return 0;
}

```

### Methode 2:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int longeur(char ch[]){
    int n = 0;
    while(ch[n]!='\0') n++;
    return n;
}

void inverse_chaine(char chaine[MAX], char inv[MAX]){
    int i,n = longeur(chaine);
    for(i=0;i<n;i++) inv[i] = chaine[n-i-1];
}


int main(){
    char ch[MAX];
    gets(ch);
    char inv[MAX];
    inverse_chaine(ch,inv);
    if (strcmp(ch,inv)==0) printf("Palindrome\n");
    else printf("Non Palindrome\n");
    return 0;
}

```

