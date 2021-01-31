#include<stdio.h>
int main(){
    int S,i,n,p;
    printf("donnez un nombre :");
    scanf("%d",&n);
    S=1; 
    if(n==0){
        printf("le factorielle de nombre 0 est : 1\n");
    }
    else if (n<0){
        for (p = -1; p>=n; p--){
        S=S*p;
    }
            if(S>0){
                S=-S;
            }
    printf("le factorielle de nombre %d est : %d\n",n,S);
    }
    else    
    {
        for(i = 1; i<=n; i++){
        S=S*i;
    }
    printf("le factorielle de nombre %d est : %d\n",n,S);
    }
}