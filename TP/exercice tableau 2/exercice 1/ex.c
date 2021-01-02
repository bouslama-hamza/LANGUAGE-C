#include<stdio.h>
int main(){
    int M[4],N[4];
    int i,j,Moy=0;
    for (i = 0; i <= 3; i++){
            printf("donnez le nombre %d de vecteur 1:",i+1);
            scanf("%d",&M[i]);
    }
    for (j = 0; j <= 3; j++){
            printf("donnez le nombre %d de vecteur 2 :",j+1);
            scanf("%d",&N[j]);
    }
    for (i = 0,j=0; i<= 3,j<=3; i++,j++){
            Moy+=M[i]*N[j];
    }
    printf("le resultat est :%d\n",Moy);
}