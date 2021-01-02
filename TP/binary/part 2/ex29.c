#include<stdio.h>
int main(){
    int i,n,S=0,x=1;
    printf("donnez un nombre en binaire:");
    scanf("%d",&i);
    n=i;
    do
    {
    S=S+(n%10)*x;
    x=2*x;
    n=n/10;
    } while (n!=0);
    printf("votre nombre en decimale est : %d\n",S);
    return 0;
 }