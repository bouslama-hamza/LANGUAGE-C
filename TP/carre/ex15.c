#include<stdio.h>
int main(){
int n ;
do{
printf ("donnez un nombre : ") ;
scanf ("%d", &n) ;
printf ("voici son carré : %d\n", n*n) ;
}while (n) ;
}