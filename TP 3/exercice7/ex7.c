#include<stdio.h>
                    //calculer la factorielle d'un nombre//
int fact(int n){
    int i,S=1;
    for (i = n; i >1; i--){
        S*=i;
    }
    return S;
}
                    //calculer la factorielle d'un nombre (no retourne)//
void affiche_fact( int n){
    int i,S=1;
    for (i = n; i >1; i--){
        S*=i;
    }
    printf("le factorielle de %d est : %d\n",n,S);
                            //renvoie le nombre de combinaisons//
}
int comb (int n , int p){
    int S;
    S= fact(n) / (fact (p) * fact (n-p));
    return S;
}
                               // a divisible par b ou no //
int estDivisible (int a, int b){
    if (a%b == 0){
        return 1;}
    else{
        return 0;}
                            //qui renvoie 1 si a est premier//
}
int estPremier(int n){
    int i ;
    for ( i =2; i < n-1; i = i + 1)
        if ( estDivisible(n,i )){
    return 0;
        }
    return 1;
}
                                //partie de utilisateur// 
int main (){
    int n,p,r;
    printf("donnez un nombre 1:");
        scanf("%d", &n);
    printf("entrez le nombre 2:");
        scanf("%d", &p);
            affiche_fact (n);
        r=fact(n);
    printf ("la factorielle de %d est :%d\n",n,r);
    printf ("le nombre de faccons de prendre %d valeurs parmi %d est: %d \n", p,n,comb(n,p));
    printf ("%d\n",estDivisible(n,p));
        if (estPremier( comb(n,p))){
            printf ("ce nombre est premier\n");
        }
        else{
            printf ("ce nombre n’est pas premier\n");
}
}