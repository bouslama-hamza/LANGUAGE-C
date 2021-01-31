#include<stdio.h>
int main(){
    int i,c,t,l,j,x=0;
    float T[l][c];
    char C[l][c];
    printf("donnez Le numero des ligne du tableau de réels:");
    scanf("%d",&l);
    printf("donnez Le numero des colone du tableau de réels:");
    scanf("%d",&c);
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
        printf("donnez le nombre %d:",x+1);
        scanf("%f",&T[i][j]);
        x++;
        }
    }
    x=0;
    printf("donnez Le numero des ligne du tableau de caractere:");
    scanf("%d",&l);
    printf("donnez Le numero des colone du tableau de caractere:");
    scanf("%d",&c);
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
        printf("donnez le caractere %d:",x+1);
        scanf("%c",&C[i][j]);
        getchar();
        x++;
        }
    }
}