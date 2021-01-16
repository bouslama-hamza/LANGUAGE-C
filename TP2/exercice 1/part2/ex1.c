#include<stdio.h>
int main()
{
  int i,j,l,c;
  printf("enter le nombre des ligne:");
  scanf("%d",&l);
  printf("enter le nombre des colone:");
  scanf("%d",&c);
  int m1[l][c], m2[l][c], m3[l][c],m4[l][c];
  printf("\nEntrez la premiere matrice:\n");
  for(i=0; i < l; ++i)
    for(j = 0; j < c; ++j)
      scanf("%d",&m1[i][j]);
  printf("\nEntrez la deuxieme matrice:\n");
  for(i = 0; i < l; ++i)
    for(j = 0; j < c; ++j)
      scanf("%d",&m2[i][j]);
  printf("\nla resultat est :\n");
  printf("Addition:\n");
  for(i = 0; i < l; ++i){
    for(j=0; j < c; ++j){
      m3[i][j] = m1[i][j] + m2[i][j];
      printf("%d",m3[i][j]);
      }
    printf("\n");}
  printf("Sustraction:\n");
  for(i = 0; i < l; ++i){
    for(j=0; j < c; ++j){
      m4[i][j] = m1[i][j] - m2[i][j];
      printf("%d",m4[i][j]);
    }
    printf("\n");
  }}
