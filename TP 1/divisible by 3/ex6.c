#include<stdio.h>
int main(){
    int a;
    printf("donnez un nombre:\n");
    scanf("%d",&a);
    if(a%3==0){
        printf("le nombre %d est divisible par 3\n",a);
    }
    else{
        printf("le nombre %d est Indivisible par 3\n",a);
    }
    
}