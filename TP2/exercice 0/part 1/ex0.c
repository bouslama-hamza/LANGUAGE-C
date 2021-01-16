#include<stdio.h>
int main(){
    int i,c,t;
    float T[t];
    char C[c];
    printf("donnez Le nombre des éléments du tableau de réels:");
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        printf("donnez le nombre %d:",i+1);
        scanf("%f",&T[i]);
}
 printf("donnez Le nombre des éléments du tableau de caractere:");
    scanf("%d",&c);
    for(i = 0; i < c; i++){
        printf("donnez le caractere %d:",i+1);
        scanf("%c",&C[i]);
        getchar();
    }
}