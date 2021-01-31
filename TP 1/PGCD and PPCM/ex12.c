#include<stdio.h>
int main(){
    int a,b,S,c;
    printf("donnez le premier nombre:\n");
    scanf("%d",&a);
    printf("donnez le deuxieme nombre :\n");
    scanf("%d",&b);
    printf("tu doit calculer :\n1_PGCD:\n2_PPCM:");
    scanf("%d",&c);
    if (c==1){
    S=b;
    while (S!=0)
    {
        S= a%b;
        a= b ;
        b= S;
    }
    printf("le PGCD est :%d\n",a);
    }
    else if (c==2){
        S = (a > b) ? a : b;
    while(1)
    {
    if( S%a==0 && S%b==0 )
    {
    printf("le PPCM est : %d\n",S);
    break;
    }
    ++S;
    }
    }
    
}