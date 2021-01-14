#include <stdio.h>
#include <stdlib.h>
int RandomValue(int n){
    int randomValue = rand()%100;
    while (n!=randomValue){
        if (n>randomValue){
        printf("plus petit:");
        scanf("%d",&n);
        }
        else if (n<randomValue){
        printf("plus grande:");
        scanf("%d",&n);}
        }
    printf("merci \n");
    }
int main(){
    int n,S;
    printf("donnez un nombre 0<n<100:");
    scanf("%d",&n);  
    RandomValue(n);
    }