#include<stdio.h>
int somme_div(int number){
    int i;
    for(i=1; i <=number;i++){
        if(number%i==0){
        printf("%d\n",i);
        }
    }
}
int main(){
    int n;
    printf("donnez un nombre:");
    scanf("%d",&n);
   printf("les diviseur de %d est:\n",n);
   somme_div(n);
}