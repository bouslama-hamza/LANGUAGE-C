#include<stdio.h>
int main(){
    int a,b;
    printf("donnez un nombre:\n");
    scanf("%d",&a);
    if(a<0){
        b=-a;
    printf("la valeur absolue de %d est: %d\n",a,b);
    }
    else{
        printf("la valeur absolue de %d est: %d\n",a,a);
    }
    
}