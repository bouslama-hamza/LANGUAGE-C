#include<stdio.h>
int power(int number){
    int db;
    db=number * number;
return db;
}
int main(){
    int n,S;
    printf("donnez un nombre :");
    scanf("%d",&n);
    S=power(n);
    printf("le double de %d est :%d\n",n,S);
}