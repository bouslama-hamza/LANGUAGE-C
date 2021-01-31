#include<stdio.h>
int longueur(char *chaine){
    int i;
    for (i = 0; *chaine != '\0'; i++){
    chaine++;
    }
    printf("nombre de caracteres = %d\n",i);
}
int main(){
    char *chaine;
    chaine = "bonjour monsieur";//nombre : 16//
    longueur(chaine);
}