#include<stdio.h>
int somme_div(int number){
    int i,S=0;
    for(i=1; i <number;i++){
        if(number%i==0){
        S+=i; }
    }
    if (S==number){ return 1; }
    else{return 0;}
}
int main(){
    int n,S;
    printf("donnez un nombre:");
    scanf("%d",&n);
    S=somme_div(n);
    printf("%d\n",S);
}