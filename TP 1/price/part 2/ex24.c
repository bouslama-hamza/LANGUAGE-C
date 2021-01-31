#include<stdio.h>
int main(){
    int S,a,i;
    S=0;
    i=1;
    printf("donnez un nombre:");
    scanf("%d",&a);
    do
    {
    S=S+i;
    i++;
    } while (S<=100 && i<=a);
    if(S>=100){
    printf("le dernier nombre avant que la somme de 1 a %d depasser 100 est : %d\n",a,i-1);
    }
    else{
    printf("la somme est : %d\n",S);
    }
}
