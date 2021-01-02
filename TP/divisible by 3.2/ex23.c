#include <stdio.h>
int main(){
    int a;
    printf("donnez un nombre :");
    scanf("%d",&a);
    if(a%3==0){
        printf("le nombre %d est divisible sur 3\n",a);
    }
    else{
    printf("le nombre %d est indivisible sur 3\n",a);
    }
    
}