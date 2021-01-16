#include<stdio.h>
int main()
{
  int i,j,a,k,N,S;
  int m1[4];
    printf("Entrez le matrice\n");
    for(i = 0; i <= 3; i++){
            scanf("%d",&m1[i]);
    }
    S=(m1[0]*m1[3])-(m1[1]*m1[2]);
    printf("Det[A] = %d\n",S);
}