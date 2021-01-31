#include <stdio.h>
#define SIZE 10
int main(){ 
  int tab[10] = { 2, 1, 4, 7, 10, 8, 5, 3, 9, 6};
  int i, j, tmp;
   for (i=0; i < SIZE; ++i){
      printf("%4d", tab[i]);
   }
  for (i=1 ; i <= SIZE-1; i++){
    j = i;
    while (j > 0 && tab[j-1] > tab[j]) {
      tmp = tab[j];
      tab[j] = tab[j-1];
      tab[j-1] = tmp;
      j--;}
   }
  printf("\napres trie:\n");
  for (i=0; i < SIZE; i++){
     printf("%4d", tab[i]);}
     printf("\n");
}
