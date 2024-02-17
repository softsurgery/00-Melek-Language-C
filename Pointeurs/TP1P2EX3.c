#include <stdio.h>
#include <stdlib.h>

int obtenir_max(int T[],int n){
    int max=T[0];
    for(int i=1;i<n;i++){
        if(T[i]>max){
            max=T[i];
        }
    }
    return max;
}

int main(){
    int T[100];
    int n;
    do{
        printf("N = ");
        scanf("%d",&n);
    } while (n>=100 || n<0);

    for(int i=0;i<n;i++){
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }

    int max=obtenir_max(T,n);

    printf("max = %d\n",max);
}