#include<stdio.h>
int main(){
    int i;
    float n,som,M;
    i=1;
    som=0;
    do
    {
    printf("donnez la note %d :",i);
    scanf("%f",&n);
    som+=n;
    i++;
    }
    while(n>0);
    M=(som-n)/(i-2);
    printf("la moyenne de %d notes est :%0.3f\n",i-2,M);   
    return 0;  
}
