#include<stdio.h>
int f3(int fin){
    int i;
    for(i = 0 ; i<fin ;i++){
    printf("Bonjour\n");
    }
}
int main(){
    int n;
    printf("doonez un nombre :");
    scanf("%d",&n);
    f3(n);
}