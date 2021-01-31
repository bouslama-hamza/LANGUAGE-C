#include <stdlib.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0
int premier(int m){
    int i ;
    for(i = 2; i < m; i = i + 1){
        if ((m % i) == 0) 
        return FALSE;}
        return TRUE;}
int prochain_premier(int n){
    while(!premier(n)){
        n = n + 1;
    }
        return n;}
void main(){
int n;
    printf ("donnez un nombre:");
        scanf("%d", &n);
premier(n);
printf("le plus petit nombre premier plus grand ou égal à %d est : %d\n",n, prochain_premier(n));
}