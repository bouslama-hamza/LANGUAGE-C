#include<stdio.h>
#include<math.h>
int main(){
    int nbr,res,i;
    long int sortie;
    printf("donnez le nombre decimale:");
    scanf("%d",&nbr);
    sortie =0;
    i=0;
    while (nbr!=0)
    {
    res= nbr%2;
    sortie+=res*pow(10,i);
    i++;
    nbr=nbr/2;
    };
    printf("votre number a binaire est :%ld\n",sortie);
    return 0;
}
