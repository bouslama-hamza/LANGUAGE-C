#include<stdio.h>
int main()
{
  int m1[2][2], m2[2][2], m3[2][2];
  int i,j,a,k;
  printf("tu doit calculer :\n1_la somme:\n2_la produit:");
  scanf("%d",&a);
  if(a==1){
  printf("\nEntrez la premiere matrice:\n");
  for(i=0; i <= 1; ++i)
    for(j = 0; j <= 1; ++j)
      scanf("%d",&m1[i][j]);
      
  printf("\nEntrez la deuxieme matrice:\n");
  for(i = 0; i <= 1; ++i)
    for(j = 0; j <= 1; ++j)
      scanf("%d",&m2[i][j]);
  
  printf("\nla resultat est :\n");
  for(i = 0; i <= 1; ++i)
  {
    for(j=0; j <= 1; ++j)
    {
      m3[i][j] = m1[i][j] + m2[i][j];
      printf("%d ",m3[i][j]);
    }
    printf("\n");
  }}
  else{
       printf("Entrez la première matrice\n");
    for(i = 0; i <=1; i++){
        for(j = 0; j <=1; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Entrez la deuxième matrice\n");
    for(i = 0; i <= 1; i++){
        for(j = 0; j <= 1; j++){
            scanf("%d",&m2[i][j]);
        }
    } 
  printf("la resultat est: \n");
  for(i = 0; i <= 1; i++){
    for(j = 0; j <= 1; j++){
      m3[i][j]=0;
      for(k = 0; k <= 1; k++){
        m3[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }
  for(i = 0; i <=1; i++){
    for(j = 0; j <=1; j++) {
      printf("%d\t",m3[i][j]);
    }
    printf("\n");
  }
  }
  return 0;
}