#include<stdio.h>
int main(){
    int n;
    printf("donnez un annee :");
    scanf("%d",&n);
    if (n%4==0 && n%100!=0)
    {
    printf("L'annee %d est bissextile\n",n);
    }
    else if (n%400==0)
    {
    printf("L'annee %d est bissextile\n",n);    
    }
    else{
    printf("L'annee %d n'est pas bissextile\n",n);
    }
    
} 