#include <stdio.h>
float somme (float * tab, int n, int p){int i;
float s = 0;
    for (i=0 ; i < n*p ; i++){ 
     s += tab[i] ;
    }
return s ;
}
void main(){
float S;
int L,C,i,j;
    printf("donnez nombre des ligne et des colone.excemple = [L,C]: ");
        scanf("[%d,%d]",&L,&C);
        float tab[L][C];
    printf("donnez les valeur de tableu:\n");
        for (i = 0; i <L; i++){
            for (j = 0; j < C; j++){
             scanf("%f",&tab[i][j])  ; 
            }}
            S= somme((float*)tab,L,C);
            printf("la somme est: %f\n", S) ;
}