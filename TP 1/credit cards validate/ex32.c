#include<stdio.h>
int main(){
    int i,n,S,D;
    printf("donnez un nombre de carte banquer :");
    scanf("%d",&n);
    i=0;
    S=0;
    while (n!=0)
    {
        if (n>=10){
        i=0;
        do{
        n-i;
        i++;
        } while ((n-i)>=10 && (n-i)%10!=0) ;
        D=n-(n-i);}
        else{
        D=n;}
        if (D%2==0)
        {
        D=2*D;}
        S+=D;
        n=(n-i)/10;}
    if (S%10==0)
    {
        printf("votre numero card est valid\n");
    }
    else{
        printf("votre numero card est non valid\n");
    }
}


