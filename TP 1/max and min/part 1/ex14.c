#include<stdio.h>
int main(){
int a,b,g,p;
printf("donner un nombre: ");
scanf("%d",&a);
printf("donner un nombre: ");
scanf("%d",&b);
 g=(a>b)?a:b;
 p=(a<b)?a:b;
printf("le plus grand entier est : %d\n",g);
printf("le plus petit entier est : %d\n",p);
}
