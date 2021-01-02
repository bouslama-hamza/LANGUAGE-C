#include<stdio.h>
int main(){
    int a;
    float P;
    printf("donnez le nombre de photocopies:");
    scanf("%d",&a);
    P=a*0.5;
    printf("le prix que tu doit paye est : %0.2fDH\n",P);
}