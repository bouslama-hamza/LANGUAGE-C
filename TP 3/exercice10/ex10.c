#include<stdio.h>
float moyenne (float tab[], int dim){
    int i;
    float moy,S=0;
    for (i = 0; i < dim; i++){
        S+=tab[i];
    }
    moy=S/dim;
    return moy;}
int main(){
    int elem,i;
    float moy;
    printf("doonez les nombre des elements du tableau:");
    scanf("%d",&elem);
    float tab[elem];
    for (i = 0; i < elem; i++){
        printf("doonez le nombre %d:",i+1);
        scanf("%f",&tab[i]);
    }
    moy=moyenne(tab,elem);
    printf("le moiyenne des element est : %g\n",moy);
}