#include<stdio.h>
int main(){
    int n;
    printf("donnez un nombre:\n");
    scanf("%d",&n);
    if(n<0){
        printf("-1\n");
    }
    else if(n==0){
        printf("0\n");
    }
    else{
        printf("1\n");
    }
}