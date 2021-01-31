#include<stdio.h>
int somme_div(int number){
    int i,S=0;
    for(i=1; i <number;i++){
        if(number%i==0){
        S+=i; }
    } return S; 
}
int main(){
    int n,S;
    printf("les nombre parfait sont:");
for (n = 0; n < 10000; n++){
    if (somme_div(n)==n){
        S=somme_div(n);
        printf("%d\n",S);}
    }
}
