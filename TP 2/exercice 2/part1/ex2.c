#include<stdio.h>
int main(){
    int i,j,n,Moy=0;
    printf("donnez le nombre des element de deux tableux:");
    scanf("%d",&n);
    int M[n],N[n];
    for (i = 0; i < n; i++){
            printf("donnez le nombre %d de vecteur 1:",i+1);
            scanf("%d",&M[i]);
    }
    for (j = 0; j < n; j++){
            printf("donnez le nombre %d de vecteur 2 :",j+1);
            scanf("%d",&N[j]);
    }
    for (i = 0,j=0; i< n,j< n; i++,j++){
            Moy+=M[i]*N[j];
    }
    printf("le resultat est :%d\n",Moy);
}
