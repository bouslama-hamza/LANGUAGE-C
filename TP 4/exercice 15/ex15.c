#include<stdio.h>
void majuscule(char *) ;
int main(){
char chaine[] = "Ceci est une chaine !" ;
majuscule(chaine) ;
printf("%s\n",chaine) ;
}
void majuscule(char *chaine){
int i=0;
while(chaine[i] != '\0'){
if ((chaine[i] >= 'a') && (chaine[i] <= 'z'))
chaine[i] += (int)'A' - (int)'a' ;
i++ ;
}
}