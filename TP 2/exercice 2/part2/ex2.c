#include<stdio.h>
int main()
{
  int i,j,a,k,N;
  int m1[3][3], m2[3], m3[3];
       printf("Entrez le matrice\n");
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Entrez le vecteur\n");
    for(i = 0; i <= 2; i++){
            scanf("%d",&m2[i]);
    } 
  printf("la resultat est: \n");
  for(i = 0; i <= 2; i++){
    for(j = 0; j <= 2; j++){
      m3[i]=0;
      for(k = 0; k <= 2; k++){
        m3[i] += m1[i][k] * m2[k];
      }
    }
  }
  for(i = 0; i <= 2; i++){
      printf("%d\t",m3[i]);
    printf("\n");
  }
}
