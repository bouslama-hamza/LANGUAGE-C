#include<stdio.h>
int main(){
    float R,Pi,S;
    printf("donnez le rayon du cercle:\n");
    scanf("%f",&R);
    Pi=3.1428571428571;
    S=(R*R)*Pi;
    printf("l’air S de cette cercle est : %f\n",S);
}