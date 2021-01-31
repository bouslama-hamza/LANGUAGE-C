#include<stdio.h>
int main(){
    int N,i;
    float Sres,Mres,Ares;
    printf("donnez les nombre des element de les deux tableau :");
    scanf("%d",&N);
    float T[N],M[N];
    for (i = 0; i < N; i++){
    printf("donnez le nombre %d de tableaux 1:",i+1);
    scanf("%f",&T[i]);
    }
    for ( i = 0; i < N; i++){
    printf("donnez le nombre %d de tableaux 2:",i+1);
    scanf("%f",&M[i]);
    }
    for ( i = 0; i < N; i++){
        Sres=T[i]-M[i];
        Mres=T[i]*M[i];
        Ares=T[i]+M[i];
        printf("Sustraction = %0.1f Multiplicaiton = %0.1f Addition = %0.1f\n",Sres,Mres,Ares);
    }   
}