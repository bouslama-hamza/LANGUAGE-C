#include<stdio.h>
int main()
{
  int i,j,a,k,N;
    printf("donnez le nombre de element:");
    scanf("%d",&N);
     int m1[N][N], m2[N], m3[N];
       printf("Entrez le matrice\n");
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Entrez le vecteur\n");
    for(i = 0; i < N; i++){
            scanf("%d",&m2[i]);
    } 
  printf("la resultat est: \n");
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      m3[i]=0;
      for(k = 0; k < N; k++){
        m3[i] += m1[i][k] * m2[k];
      }
    }
  }
  for(i = 0; i < N; i++){
      printf("%d\t",m3[i]);
    printf("\n");
  }
}