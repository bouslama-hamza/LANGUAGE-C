#include<stdio.h>
int main(){
    int S,i,n,p;
    printf("donnez un nombre :");
    scanf("%d",&n);
    S=1;
    i=1;
    p=-1;
    if(n==0){
        printf("le factorielle de nombre 0 est : 1\n");
    }
    else if (n<0){
        while (p>=n){
        S=S*p;
        p--;
    }
            if(S>0){
                S=-S;
            }
    printf("le factorielle de nombre %d est : %d\n",n,S);
    }
    else    
    {
    while (i<=n)
    {
        S=S*i;
        i++;
    }
    printf("le factorielle de nombre %d est : %d\n",n,S);
    }
}