#include <stdio.h>
int Echange(int a, int b){
 int temp=a;
  a = b;
 b = temp;} 
int main() {
 int x,y,z,m;
 printf("Entrez le premier entier: ");
 scanf("%d", &x);
 printf("Entrez le deuxieme entier: ");
 scanf("%d", &y);
 printf("Entrez le troisieme entier: ");
 scanf("%d", &z);
 Echange(x,z);
 Echange(z,y);
 printf(" fonction Echange:\n\tx = %d\n\ty = %d\n\tz = %d\n", z, x,y);}